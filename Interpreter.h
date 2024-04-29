#ifndef ASTGenerator_H
#define ASTGenerator_H

#include "ASTTree.h"
#include "Driver.h"
#include "GrammarBaseVisitor.h"

class Interpreter : public GrammarBaseVisitor {
 public:
  std::any visitProg(GrammarParser::ProgContext *ctx) override;
  std::any visitBase_type(GrammarParser::Base_typeContext *ctx) override;
  std::any visitVariable_declaration(
      GrammarParser::Variable_declarationContext *ctx) override;
  std::any visitVariable_definition(
      GrammarParser::Variable_definitionContext *ctx) override;
  std::any visitVariable_declaration_definition(
      GrammarParser::Variable_declaration_definitionContext *ctx) override;
  std::any visitPrint(GrammarParser::PrintContext *ctx) override;
  std::any visitFunction(GrammarParser::FunctionContext *ctx) override;
  std::any visitStatement(GrammarParser::StatementContext *ctx) override;
  std::any visitIf_statement(GrammarParser::If_statementContext *ctx) override;
  std::any visitElse_statement(
      GrammarParser::Else_statementContext *ctx) override;
  std::any visitExpression(GrammarParser::ExpressionContext *ctx) override;
  Interpreter() : program(nullptr){};

  virtual ~Interpreter() override;

 private:
  Prog *program;
};

#endif