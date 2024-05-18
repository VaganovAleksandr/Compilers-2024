
// Generated from Grammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "GrammarListener.h"


/**
 * This class provides an empty implementation of GrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  GrammarBaseListener : public GrammarListener {
public:

  virtual void enterPre_main(GrammarParser::Pre_mainContext * /*ctx*/) override { }
  virtual void exitPre_main(GrammarParser::Pre_mainContext * /*ctx*/) override { }

  virtual void enterProg(GrammarParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(GrammarParser::ProgContext * /*ctx*/) override { }

  virtual void enterBase_type(GrammarParser::Base_typeContext * /*ctx*/) override { }
  virtual void exitBase_type(GrammarParser::Base_typeContext * /*ctx*/) override { }

  virtual void enterFunction_declaration(GrammarParser::Function_declarationContext * /*ctx*/) override { }
  virtual void exitFunction_declaration(GrammarParser::Function_declarationContext * /*ctx*/) override { }

  virtual void enterArray_type(GrammarParser::Array_typeContext * /*ctx*/) override { }
  virtual void exitArray_type(GrammarParser::Array_typeContext * /*ctx*/) override { }

  virtual void enterParameter(GrammarParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(GrammarParser::ParameterContext * /*ctx*/) override { }

  virtual void enterType(GrammarParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(GrammarParser::TypeContext * /*ctx*/) override { }

  virtual void enterParameter_list(GrammarParser::Parameter_listContext * /*ctx*/) override { }
  virtual void exitParameter_list(GrammarParser::Parameter_listContext * /*ctx*/) override { }

  virtual void enterMethod(GrammarParser::MethodContext * /*ctx*/) override { }
  virtual void exitMethod(GrammarParser::MethodContext * /*ctx*/) override { }

  virtual void enterClass_field(GrammarParser::Class_fieldContext * /*ctx*/) override { }
  virtual void exitClass_field(GrammarParser::Class_fieldContext * /*ctx*/) override { }

  virtual void enterClass_statement(GrammarParser::Class_statementContext * /*ctx*/) override { }
  virtual void exitClass_statement(GrammarParser::Class_statementContext * /*ctx*/) override { }

  virtual void enterClass(GrammarParser::ClassContext * /*ctx*/) override { }
  virtual void exitClass(GrammarParser::ClassContext * /*ctx*/) override { }

  virtual void enterVariable_declaration(GrammarParser::Variable_declarationContext * /*ctx*/) override { }
  virtual void exitVariable_declaration(GrammarParser::Variable_declarationContext * /*ctx*/) override { }

  virtual void enterVariable_definition(GrammarParser::Variable_definitionContext * /*ctx*/) override { }
  virtual void exitVariable_definition(GrammarParser::Variable_definitionContext * /*ctx*/) override { }

  virtual void enterVariable_declaration_definition(GrammarParser::Variable_declaration_definitionContext * /*ctx*/) override { }
  virtual void exitVariable_declaration_definition(GrammarParser::Variable_declaration_definitionContext * /*ctx*/) override { }

  virtual void enterPrint(GrammarParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(GrammarParser::PrintContext * /*ctx*/) override { }

  virtual void enterFunction(GrammarParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(GrammarParser::FunctionContext * /*ctx*/) override { }

  virtual void enterIf_statement(GrammarParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(GrammarParser::If_statementContext * /*ctx*/) override { }

  virtual void enterElse_statement(GrammarParser::Else_statementContext * /*ctx*/) override { }
  virtual void exitElse_statement(GrammarParser::Else_statementContext * /*ctx*/) override { }

  virtual void enterStatement(GrammarParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(GrammarParser::StatementContext * /*ctx*/) override { }

  virtual void enterExpression(GrammarParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(GrammarParser::ExpressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

