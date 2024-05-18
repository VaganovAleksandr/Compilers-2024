
// Generated from Grammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "GrammarVisitor.h"


/**
 * This class provides an empty implementation of GrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  GrammarBaseVisitor : public GrammarVisitor {
public:

  virtual std::any visitPre_main(GrammarParser::Pre_mainContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProg(GrammarParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBase_type(GrammarParser::Base_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction_declaration(GrammarParser::Function_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArray_type(GrammarParser::Array_typeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(GrammarParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(GrammarParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter_list(GrammarParser::Parameter_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethod(GrammarParser::MethodContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_field(GrammarParser::Class_fieldContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass_statement(GrammarParser::Class_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClass(GrammarParser::ClassContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_declaration(GrammarParser::Variable_declarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_definition(GrammarParser::Variable_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariable_declaration_definition(GrammarParser::Variable_declaration_definitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint(GrammarParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction(GrammarParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_statement(GrammarParser::If_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElse_statement(GrammarParser::Else_statementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(GrammarParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(GrammarParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

