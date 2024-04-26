
// Generated from Grammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "GrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by GrammarParser.
 */
class  GrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by GrammarParser.
   */
    virtual std::any visitProg(GrammarParser::ProgContext *context) = 0;

    virtual std::any visitBase_type(GrammarParser::Base_typeContext *context) = 0;

    virtual std::any visitVariable_declaration(GrammarParser::Variable_declarationContext *context) = 0;

    virtual std::any visitVariable_definition(GrammarParser::Variable_definitionContext *context) = 0;

    virtual std::any visitVariable_declaration_definition(GrammarParser::Variable_declaration_definitionContext *context) = 0;

    virtual std::any visitPrint(GrammarParser::PrintContext *context) = 0;

    virtual std::any visitFunction(GrammarParser::FunctionContext *context) = 0;

    virtual std::any visitStatement(GrammarParser::StatementContext *context) = 0;

    virtual std::any visitExpression(GrammarParser::ExpressionContext *context) = 0;


};

