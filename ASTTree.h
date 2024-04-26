#ifndef ASTTree_H
#define ASTTree_H

#pragma once
#include "Driver.h"
#include "GrammarParser.h"

class VariableNameExpression : public GrammarParser::ExpressionContext {
 public:
  std::string get_name();
  int eval() override;
};

class IntegerExpression : public GrammarParser::ExpressionContext {
 public:
  int eval() override;
};

class BinaryOperatorExpression : public GrammarParser::ExpressionContext {
 public:
  int eval() override;
};

class VariableDeclaration : public GrammarParser::Variable_declarationContext {
 public:
  void declare();
};

class VariableDefinition : public GrammarParser::Variable_definitionContext {
 public:
  void define();
};

class VariableDeclarationDefinition
    : public GrammarParser::Variable_declaration_definitionContext {
 public:
  void declare_define();
};

class Print : public GrammarParser::PrintContext {
 public:
  void execute() override;
};

class Function : public GrammarParser::FunctionContext {
 public:
  std::any execute() override;
};

class FunctionStatement : public GrammarParser::StatementContext {
 public:
  std::any execute() override;
};

class VariableDeclarationStatement : public GrammarParser::StatementContext {
 public:
  std::any execute() override;
};

class VariableDefinitionStatement : public GrammarParser::StatementContext {
 public:
  std::any execute() override;
};

class VariableDeclarationDefinitionStatement
    : public GrammarParser::StatementContext {
 public:
  std::any execute() override;
};

class IfElseStatement : public GrammarParser::StatementContext {
 public:
  std::any execute() override;
};

class Prog : public GrammarParser::ProgContext {
 public:
  explicit Prog(GrammarParser::ProgContext* prog)
      : prog(prog) {};
  int execute();

  GrammarParser::ProgContext* prog;
};

#endif