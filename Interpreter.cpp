#include "Interpreter.h"

extern std::unique_ptr<Driver> driver;

std::any Interpreter::visitProg(GrammarParser::ProgContext *ctx) {
  program = new Prog(ctx);
  for (auto* statement : ctx->statement()) {
    visit(statement);
  }
  return program;
}

std::any Interpreter::visitBase_type(GrammarParser::Base_typeContext *ctx) {
  if (!ctx) throw std::logic_error("ctx is nullptr in visitBase_type");
  if (ctx->int_) return std::string("int");
  if (ctx->bool_) return std::string("bool");
  if (ctx->void_) return std::string("void");
  exit(-1);
}

std::any Interpreter::visitVariable_declaration(GrammarParser::Variable_declarationContext *ctx) {
  if (!ctx) throw std::logic_error("ctx is nullptr in visitVariable_declaration");
  auto type = std::any_cast<std::string>(visit(ctx->base_type()));
  auto name = std::any_cast<std::string>(visit(ctx->VARIABLE_NAME()));
  int value = 0;
  driver->AddVariable(type, name, value);
  return 0;
}

std::any Interpreter::visitVariable_definition(GrammarParser::Variable_definitionContext *ctx) {
  if (!ctx) throw std::logic_error("ctx is nullptr in visitVariable_definition");
  auto name = std::any_cast<std::string>(ctx->VARIABLE_NAME()->toString());
  auto value = std::any_cast<int>(visit(ctx->expression()));
  driver->ChangeVariable(name, value);
  return 0;
}

std::any Interpreter::visitVariable_declaration_definition(GrammarParser::Variable_declaration_definitionContext *ctx) {
  if (!ctx) throw std::logic_error("ctx is nullptr in visitVariable_declaration_definition");
  auto type = std::any_cast<std::string>(visit(ctx->base_type()));
  auto name = std::any_cast<std::string>(ctx->VARIABLE_NAME()->toString());
  int value = std::any_cast<int>(visit(ctx->expression()));
  driver->AddVariable(type, name, value);
  return 0;
}

std::any Interpreter::visitPrint(GrammarParser::PrintContext *ctx) {
  std::cout << std::any_cast<int>(visit(ctx->expression())) << "\n"; //TODO normal cout...
  return 0;
}

std::any Interpreter::visitFunction(GrammarParser::FunctionContext *ctx) {
  if (!ctx) throw std::logic_error("ctx is nullptr in visitFunction");
  if (ctx->print()) {
    visit(ctx->print());
  }
  return 0;
}

std::any Interpreter::visitIf_statement(GrammarParser::If_statementContext *ctx) {
  visit(ctx->statement());
  return 0;
}

std::any Interpreter::visitElse_statement(GrammarParser::Else_statementContext *ctx) {
  visit(ctx->statement());
  return 0;
}

std::any Interpreter::visitStatement(GrammarParser::StatementContext *ctx) {
  if (!ctx) throw std::logic_error("ctx is nullptr in visitStatement");
  if (ctx->variable_declaration()) { visit(ctx->variable_declaration()); return 0; }
  if (ctx->variable_definition()) { visit(ctx->variable_definition()); return 0; }
  if (ctx->variable_declaration_definition()) { visit(ctx->variable_declaration_definition()); return 0; }
  if (ctx->expr) { // If Else Statement
    if (std::any_cast<bool>(visit(ctx->expr))) {
      for (auto* if_stat : ctx->if_statement()) {
        visit(if_stat);
      }
    } else if (!ctx->else_statement().empty()) {
      for (auto* else_stat : ctx->else_statement()) {
        visit(else_stat);
      }
    }
    return 0;
  }
  if (ctx->function()) visit(ctx->function());
  return 0;
}

std::any Interpreter::visitExpression(GrammarParser::ExpressionContext *ctx) {
  if (!ctx) throw std::logic_error("ctx in nullptr in visitExpression");
  if (ctx->expr1 && ctx->expr2) {
    std::string op = ctx->BINARY_OPERATOR()->toString();
    //TODO: support of other types, such as strings and etc
    if (op == "+") {
      return std::any_cast<int>(visit(ctx->expr1)) + std::any_cast<int>(visit(ctx->expr2));
    }
    if (op == "-") {
      return std::any_cast<int>(visit(ctx->expr1)) - std::any_cast<int>(visit(ctx->expr2));
    }
    if (op == "*") {
      return std::any_cast<int>(visit(ctx->expr1)) * std::any_cast<int>(visit(ctx->expr2));
    }
    if (op == "/") {
      return std::any_cast<int>(visit(ctx->expr1)) / std::any_cast<int>(visit(ctx->expr2));
    }
    if (op == "==") {
      return std::any_cast<int>(visit(ctx->expr1)) == std::any_cast<int>(visit(ctx->expr2));
    }
    if (op == "&&") {
      return std::any_cast<int>(visit(ctx->expr1)) && std::any_cast<int>(visit(ctx->expr2));
    }
    if (op == "||") {
      return std::any_cast<int>(visit(ctx->expr1)) || std::any_cast<int>(visit(ctx->expr2));
    }
    if (op == "^") {
      return std::any_cast<int>(visit(ctx->expr1)) ^ std::any_cast<int>(visit(ctx->expr2));
    }
  }
  if (ctx->INTEGER()) {
    int number = std::stoi(ctx->INTEGER()->toString());
    if (ctx->UNARY_OPERATOR() && ctx->UNARY_OPERATOR()->toString() == "-") {
      number *= -1;
    }
    return number;
  }
  if (ctx->VARIABLE_NAME()) return driver->GetVariable(ctx->VARIABLE_NAME()->toString());
  return -1;
}

Interpreter::~Interpreter() {
  delete program;
}