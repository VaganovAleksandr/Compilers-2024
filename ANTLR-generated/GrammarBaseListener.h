
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

  virtual void enterProg(GrammarParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(GrammarParser::ProgContext * /*ctx*/) override { }

  virtual void enterBase_type(GrammarParser::Base_typeContext * /*ctx*/) override { }
  virtual void exitBase_type(GrammarParser::Base_typeContext * /*ctx*/) override { }

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

