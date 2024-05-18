
// Generated from Grammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "GrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by GrammarParser.
 */
class  GrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterPre_main(GrammarParser::Pre_mainContext *ctx) = 0;
  virtual void exitPre_main(GrammarParser::Pre_mainContext *ctx) = 0;

  virtual void enterProg(GrammarParser::ProgContext *ctx) = 0;
  virtual void exitProg(GrammarParser::ProgContext *ctx) = 0;

  virtual void enterBase_type(GrammarParser::Base_typeContext *ctx) = 0;
  virtual void exitBase_type(GrammarParser::Base_typeContext *ctx) = 0;

  virtual void enterFunction_declaration(GrammarParser::Function_declarationContext *ctx) = 0;
  virtual void exitFunction_declaration(GrammarParser::Function_declarationContext *ctx) = 0;

  virtual void enterArray_type(GrammarParser::Array_typeContext *ctx) = 0;
  virtual void exitArray_type(GrammarParser::Array_typeContext *ctx) = 0;

  virtual void enterParameter(GrammarParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(GrammarParser::ParameterContext *ctx) = 0;

  virtual void enterType(GrammarParser::TypeContext *ctx) = 0;
  virtual void exitType(GrammarParser::TypeContext *ctx) = 0;

  virtual void enterParameter_list(GrammarParser::Parameter_listContext *ctx) = 0;
  virtual void exitParameter_list(GrammarParser::Parameter_listContext *ctx) = 0;

  virtual void enterMethod(GrammarParser::MethodContext *ctx) = 0;
  virtual void exitMethod(GrammarParser::MethodContext *ctx) = 0;

  virtual void enterClass_field(GrammarParser::Class_fieldContext *ctx) = 0;
  virtual void exitClass_field(GrammarParser::Class_fieldContext *ctx) = 0;

  virtual void enterClass_statement(GrammarParser::Class_statementContext *ctx) = 0;
  virtual void exitClass_statement(GrammarParser::Class_statementContext *ctx) = 0;

  virtual void enterClass(GrammarParser::ClassContext *ctx) = 0;
  virtual void exitClass(GrammarParser::ClassContext *ctx) = 0;

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

