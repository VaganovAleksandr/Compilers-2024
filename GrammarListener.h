
// Generated from Grammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "GrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by GrammarParser.
 */
class  GrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(GrammarParser::ProgContext *ctx) = 0;
  virtual void exitProg(GrammarParser::ProgContext *ctx) = 0;

  virtual void enterBase_type(GrammarParser::Base_typeContext *ctx) = 0;
  virtual void exitBase_type(GrammarParser::Base_typeContext *ctx) = 0;

  virtual void enterVariable_declaration(GrammarParser::Variable_declarationContext *ctx) = 0;
  virtual void exitVariable_declaration(GrammarParser::Variable_declarationContext *ctx) = 0;

  virtual void enterVariable_definition(GrammarParser::Variable_definitionContext *ctx) = 0;
  virtual void exitVariable_definition(GrammarParser::Variable_definitionContext *ctx) = 0;

  virtual void enterVariable_declaration_definition(GrammarParser::Variable_declaration_definitionContext *ctx) = 0;
  virtual void exitVariable_declaration_definition(GrammarParser::Variable_declaration_definitionContext *ctx) = 0;

  virtual void enterPrint(GrammarParser::PrintContext *ctx) = 0;
  virtual void exitPrint(GrammarParser::PrintContext *ctx) = 0;

  virtual void enterFunction(GrammarParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(GrammarParser::FunctionContext *ctx) = 0;

  virtual void enterIf_statement(GrammarParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(GrammarParser::If_statementContext *ctx) = 0;

  virtual void enterElse_statement(GrammarParser::Else_statementContext *ctx) = 0;
  virtual void exitElse_statement(GrammarParser::Else_statementContext *ctx) = 0;

  virtual void enterStatement(GrammarParser::StatementContext *ctx) = 0;
  virtual void exitStatement(GrammarParser::StatementContext *ctx) = 0;

  virtual void enterExpression(GrammarParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(GrammarParser::ExpressionContext *ctx) = 0;


};

