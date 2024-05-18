#include "ASTTree.h"

void Instruction::Print(size_t number_of_tabs) const noexcept {
  for (size_t i = 0; i < number_of_tabs; ++i) {
    std::cout << "\t";
  }
  std::cout << name << "\n";
  ++number_of_tabs;
  for (auto* instr : children) {
    instr->Print(number_of_tabs);
  }
}

void Instruction::PrintToFile(std::ofstream& file,
                              size_t number_of_tabs) const noexcept {
  for (size_t i = 0; i < number_of_tabs; ++i) {
    file << "\t";
  }
  file << name << "\n";
  ++number_of_tabs;
  for (auto* instr : children) {
    instr->PrintToFile(file, number_of_tabs);
  }
}

std::any ASTGenerator::visitProg(GrammarParser::ProgContext* ctx) {
  std::vector<Instruction*> children;

  for (auto* pre_main : ctx->pre_main()) {
    children.push_back(std::any_cast<Instruction*>(visit(pre_main)));
  }

  for (auto* stat : ctx->statement()) {
    children.push_back(std::any_cast<Instruction*>(visit(stat)));
  }
  return new Instruction("Prog", children);
}

std::any ASTGenerator::visitArray_type(GrammarParser::Array_typeContext* ctx) {
  return new Instruction(
      "ArrayType", {std::any_cast<Instruction*>(visit(ctx->base_type()))});
}

std::any ASTGenerator::visitClass(GrammarParser::ClassContext* ctx) {
  std::string name = ctx->VARIABLE_NAME()->toString();
  std::vector<Instruction*> children;
  for (auto* child : ctx->class_statement()) {
    children.push_back(std::any_cast<Instruction*>(visit(child)));
  }
  return new Instruction("class " + name, children);
}

std::any ASTGenerator::visitClass_field(
    GrammarParser::Class_fieldContext* ctx) {
  return new Instruction(
      "class field",
      {std::any_cast<Instruction*>(visit(ctx->type())),
       new Instruction(
           "VariableName",
           {new Instruction(ctx->VARIABLE_NAME()->toString(), {})})});
}

std::any ASTGenerator::visitClass_statement(
    GrammarParser::Class_statementContext* ctx) {
  if (ctx->method()) {
    return new Instruction("Class_statement",
                           {std::any_cast<Instruction*>(visit(ctx->method()))});
  }
  return new Instruction(
      "Class statement",
      {std::any_cast<Instruction*>(visit(ctx->class_field()))});
}

std::any ASTGenerator::visitMethod(GrammarParser::MethodContext* ctx) {
  std::vector<Instruction*> children;
  children.push_back(std::any_cast<Instruction*>(visit(ctx->type())));
  if (ctx->parameter_list()) {
    children.push_back(std::any_cast<Instruction*>(visit(ctx->parameter_list())));
  }
  for (auto* stat : ctx->statement()) {
    children.push_back(std::any_cast<Instruction*>(visit(stat)));
  }
  return new Instruction("Method", children);
}

std::any ASTGenerator::visitParameter(GrammarParser::ParameterContext* ctx) {
  return new Instruction(
      "Parameter",
      {std::any_cast<Instruction*>(visit(ctx->type())),
       new Instruction(
           "VariableName",
           {new Instruction(ctx->VARIABLE_NAME()->toString(), {})})});
}

std::any ASTGenerator::visitParameter_list(GrammarParser::Parameter_listContext* ctx) {
  std::vector<Instruction*> children;
  for (auto* child : ctx->parameter()) {
    children.push_back(std::any_cast<Instruction*>(visit(child)));
  }
  return new Instruction("Parameter_list", children);
}

std::any ASTGenerator::visitType(GrammarParser::TypeContext* ctx) {
  if (ctx->base_type()) {
    return new Instruction("Type", {std::any_cast<Instruction*>(visit(ctx->base_type()))});
  }
  return new Instruction("Type", {std::any_cast<Instruction*>(visit(ctx->array_type()))});
}

std::any ASTGenerator::visitPre_main(GrammarParser::Pre_mainContext* ctx) {
  if (ctx->function_declaration()) {
    return new Instruction("Pre_main", {std::any_cast<Instruction*>(visit(ctx->function_declaration()))});
  }
  return new Instruction("Pre_main", {std::any_cast<Instruction*>(visit(ctx->class_()))});
}

std::any ASTGenerator::visitFunction_declaration(GrammarParser::Function_declarationContext* ctx) {
  std::vector<Instruction*> children;
  children.push_back(std::any_cast<Instruction*>(visit(ctx->type())));
  if (ctx->parameter_list()) {
    children.push_back(std::any_cast<Instruction*>(visit(ctx->parameter_list())));
  }
  for (auto* child : ctx->statement()) {
    children.push_back(std::any_cast<Instruction*>(visit(child)));
  }
  return new Instruction("Function_declaration", children);
}

std::any ASTGenerator::visitBase_type(GrammarParser::Base_typeContext* ctx) {
  if (ctx->int_)
    return new Instruction("Base_type", {new Instruction("int", {})});
  if (ctx->bool_)
    return new Instruction("Base_type", {new Instruction("bool", {})});
  if (ctx->void_)
    return new Instruction("Base_type", {new Instruction("void", {})});
  exit(-1);
}

std::any ASTGenerator::visitVariable_declaration(
    GrammarParser::Variable_declarationContext* ctx) {
  auto* type = std::any_cast<Instruction*>(visit(ctx->type()));
  std::string name = ctx->VARIABLE_NAME()->toString();
  return new Instruction(
      "Variable_declaration",
      {type, new Instruction("VariableName", {new Instruction(name, {})})});
}

std::any ASTGenerator::visitVariable_definition(
    GrammarParser::Variable_definitionContext* ctx) {
  std::string name = ctx->VARIABLE_NAME()->toString();
  auto* value = std::any_cast<Instruction*>(visit(ctx->expression()));
  return new Instruction(
      "Variable_definition",
      {new Instruction("VariableName", {new Instruction(name, {})}), value});
}

std::any ASTGenerator::visitVariable_declaration_definition(
    GrammarParser::Variable_declaration_definitionContext* ctx) {
  auto* type = std::any_cast<Instruction*>(visit(ctx->type()));
  std::string name = ctx->VARIABLE_NAME()->toString();
  auto* value = std::any_cast<Instruction*>(visit(ctx->expression()));
  return new Instruction(
      "Variable_declaration_definition",
      {type, new Instruction("VariableName", {new Instruction(name, {})}),
       value});
}

std::any ASTGenerator::visitPrint(GrammarParser::PrintContext* ctx) {
  auto* value = std::any_cast<Instruction*>(visit(ctx->expression()));
  return new Instruction("Print", {value});
}

std::any ASTGenerator::visitFunction(GrammarParser::FunctionContext* ctx) {
  Instruction* instr = nullptr;
  if (ctx->print()) {
    instr = std::any_cast<Instruction*>(visit(ctx->print()));
  }
  return new Instruction("Function", {instr});
}

std::any ASTGenerator::visitStatement(GrammarParser::StatementContext* ctx) {
  Instruction* instr;
  if (ctx->variable_declaration())
    instr = std::any_cast<Instruction*>(visit(ctx->variable_declaration()));
  if (ctx->variable_definition())
    instr = std::any_cast<Instruction*>(visit(ctx->variable_definition()));
  if (ctx->variable_declaration_definition())
    instr = std::any_cast<Instruction*>(
        visit(ctx->variable_declaration_definition()));
  if (ctx->expression()) {
    auto* expr_instr = std::any_cast<Instruction*>(visit(ctx->expression()));
    std::vector<Instruction*> if_instructions;
    for (auto* instr_ : ctx->if_statement()) {
      if_instructions.push_back(std::any_cast<Instruction*>(visit(instr_)));
    }
    std::vector<Instruction*> else_instructions;
    for (auto* instr_ : ctx->else_statement()) {
      else_instructions.push_back(std::any_cast<Instruction*>(visit(instr_)));
    }
    if (!else_instructions.empty()) {
      instr = new Instruction(
          "IfElseStatement",
          {expr_instr, new Instruction("If_statements", if_instructions),
           new Instruction("ElseStatements", else_instructions)});
    } else {
      instr = new Instruction(
          "IfElseStatement",
          {expr_instr, new Instruction("If_statements", if_instructions)});
    }
  }
  if (ctx->function()) {
    instr = std::any_cast<Instruction*>(visit(ctx->function()));
  }
  return new Instruction("Statement", {instr});
}

std::any ASTGenerator::visitIf_statement(
    GrammarParser::If_statementContext* ctx) {
  return new Instruction(
      "If_statement", {std::any_cast<Instruction*>(visit(ctx->statement()))});
}

std::any ASTGenerator::visitElse_statement(
    GrammarParser::Else_statementContext* ctx) {
  return new Instruction(
      "Else_statement", {std::any_cast<Instruction*>(visit(ctx->statement()))});
}

std::any ASTGenerator::visitExpression(GrammarParser::ExpressionContext* ctx) {
  if (ctx->BINARY_OPERATOR()) {
    auto* instr1 = std::any_cast<Instruction*>(visit(ctx->expr1));
    auto* instr2 = std::any_cast<Instruction*>(visit(ctx->expr2));
    std::string instr_op = ctx->BINARY_OPERATOR()->toString();
    return new Instruction(
        "BinaryOperatorExpression",
        {instr1,
         new Instruction("BinaryOperator", {new Instruction(instr_op, {})}),
         instr2});
  }
  if (ctx->VARIABLE_NAME()) {
    std::string name = ctx->VARIABLE_NAME()->toString();
    return new Instruction("VariableNameExpression",
                           {new Instruction(name, {})});
  }
  if (ctx->INTEGER()) {
    std::string value = ctx->INTEGER()->toString();
    if (ctx->UNARY_OPERATOR() && ctx->UNARY_OPERATOR()->toString() == "-") {
      value = '-' + value;
    }
    return new Instruction("IntegerExpression", {new Instruction(value, {})});
  }
  if (ctx->STRING()) {
    std::string value = ctx->STRING()->toString();
    return new Instruction("StringExpression", {new Instruction(value, {})});
  }
  exit(-1);
}

ASTTree::~ASTTree() { delete prog_root_instr; }

void ASTTree::Build(GrammarParser::ProgContext* prog) {
  ASTGenerator astGenerator;
  prog_root_instr = std::any_cast<Instruction*>(astGenerator.visitProg(prog));
}

void ASTTree::Print() { prog_root_instr->Print(0); }

void ASTTree::PrintToFile(const std::string& path_to_file) {
  std::ofstream file;
  file.open(path_to_file);
  prog_root_instr->PrintToFile(file, 0);
}

Instruction* ASTTree::GetRoot() const { return prog_root_instr; }