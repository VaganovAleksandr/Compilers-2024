
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
    virtual std::any visitPre_main(GrammarParser::Pre_mainContext *context) = 0;

    virtual std::any visitProg(GrammarParser::ProgContext *context) = 0;

    virtual std::any visitBase_type(GrammarParser::Base_typeContext *context) = 0;

    virtual std::any visitFunction_declaration(GrammarParser::Function_declarationContext *context) = 0;

    virtual std::any visitArray_type(GrammarParser::Array_typeContext *context) = 0;

    virtual std::any visitParameter(GrammarParser::ParameterContext *context) = 0;

    virtual std::any visitType(GrammarParser::TypeContext *context) = 0;

    virtual std::any visitParameter_list(GrammarParser::Parameter_listContext *context) = 0;

    virtual std::any visitMethod(GrammarParser::MethodContext *context) = 0;

    virtual std::any visitClass_field(GrammarParser::Class_fieldContext *context) = 0;

    virtual std::any visitClass_statement(GrammarParser::Class_statementContext *context) = 0;

    virtual std::any visitClass(GrammarParser::ClassContext *context) = 0;

    virtual std::any visitVariable_declaration(GrammarParser::Variable_declarationContext *context) = 0;

    virtual std::any visitVariable_definition(GrammarParser::Variable_definitionContext *context) = 0;

    virtual std::any visitVariable_declaration_definition(GrammarParser::Variable_declaration_definitionContext *context) = 0;

    virtual std::any visitPrint(GrammarParser::PrintContext *context) = 0;

    virtual std::any visitFunction(GrammarParser::FunctionContext *context) = 0;

    virtual std::any visitIf_statement(GrammarParser::If_statementContext *context) = 0;

    virtual std::any visitElse_statement(GrammarParser::Else_statementContext *context) = 0;

    virtual std::any visitStatement(GrammarParser::StatementContext *context) = 0;

    virtual std::any visitExpression(GrammarParser::ExpressionContext *context) = 0;


};

