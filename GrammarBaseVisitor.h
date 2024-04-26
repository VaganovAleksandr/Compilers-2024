
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

  virtual std::any visitProg(GrammarParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBase_type(GrammarParser::Base_typeContext *ctx) override {
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

  virtual std::any visitStatement(GrammarParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(GrammarParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

