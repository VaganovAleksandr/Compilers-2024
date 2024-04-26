#include "ASTTree.h"

extern std::unique_ptr<Driver> driver;

std::string VariableNameExpression::get_name() {
  return VARIABLE_NAME()->toString();
}

int VariableNameExpression::eval() {
  if (!VARIABLE_NAME()) {
    throw std::logic_error("Error loading variable name");
  }
  return driver->GetVariable(VARIABLE_NAME()->toString());
}

int IntegerExpression::eval() {
  if (!INTEGER()) {
    throw std::logic_error("Error loading integer");
  }
  return std::stoi(INTEGER()->toString());
}

int BinaryOperatorExpression::eval() {
  if (!(expr1 && BINARY_OPERATOR() && expr2)) {
    throw std::logic_error("Error loading binary operator expression");
  }
  std::string op = BINARY_OPERATOR()->toString();
  if (op == "+") {
    return expr1->eval() + expr2->eval();
  }
  if (op == "-") {
    return expr1->eval() - expr2->eval();
  }
  if (op == "*") {
    return expr1->eval() * expr2->eval();
  }
  if (op == "/") {
    return expr1->eval() / expr2->eval();
  }
  if (op == "==") {
    return expr1->eval() == expr2->eval();
  }
  if (op == "&&") {
    return expr1->eval() && expr2->eval();
  }
  if (op == "||") {
    return expr1->eval() || expr2->eval();
  }
  if (op == "^") {
    return expr1->eval() ^ expr2->eval();
  }
  exit(-1);
}

void VariableDeclaration::declare() {
  driver->AddVariable(base_type()->toString(), VARIABLE_NAME()->toString(), 0);
}

void VariableDefinition::define() {
  driver->ChangeVariable(VARIABLE_NAME()->toString(), expression()->eval());
}

void VariableDeclarationDefinition::declare_define() {
  driver->AddVariable(base_type()->toString(), VARIABLE_NAME()->toString(),
                      expression()->eval());
}

void Print::execute() {
  std::cout << expression()->eval() << "\n";
}

std::any Function::execute() {
  if (print()) {
    print()->execute();
  }
  return -1;
}

//TODO: void functions...

std::any FunctionStatement::execute() {
  return dynamic_cast<Function*>(function())->execute();
}

std::any VariableDeclarationStatement::execute() {
  driver->AddVariable(variable_declaration()->base_type()->toString(),
                      variable_declaration()->VARIABLE_NAME()->toString(), 0);
  return 0;
}

std::any VariableDefinitionStatement::execute() {
  driver->ChangeVariable(variable_declaration()->VARIABLE_NAME()->toString(),
                         expression()->eval());
  return 0;
}

std::any VariableDeclarationDefinitionStatement::execute() {
  driver->AddVariable(variable_declaration()->base_type()->toString(),
                      variable_declaration()->VARIABLE_NAME()->toString(),
                      expression()->eval());
  return 0;
}

std::any IfElseStatement::execute() {
  if (expr->eval()) {
    if_->execute();
  } else if (else_) {
    else_->execute();
  }
  return 0;
}

int Prog::execute() {
  for (auto* stat : statement()) {
    if (stat->expr) {
      dynamic_cast<IfElseStatement*>(stat)->execute();
    } else if (stat->variable_declaration()) {
      dynamic_cast<VariableDeclarationStatement*>(stat)->execute();
    } else if (stat->variable_definition()) {
      dynamic_cast<VariableDefinitionStatement*>(stat)->execute();
    } else if (stat->variable_declaration_definition()) {
      dynamic_cast<VariableDeclarationDefinitionStatement*>(stat)->execute();
    } else if (stat->function()) {
      dynamic_cast<FunctionStatement*>(stat)->execute();
    }
  }
  return 0;
}