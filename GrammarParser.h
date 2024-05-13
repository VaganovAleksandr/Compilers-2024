
// Generated from Grammar.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  GrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, NEWLINE = 16, SPACE = 17, VARIABLE_NAME = 18, INTEGER = 19, 
    SCHAR = 20, STRING = 21, UNARY_OPERATOR = 22, BINARY_OPERATOR = 23
  };

  enum {
    RuleProg = 0, RuleBase_type = 1, RuleVariable_declaration = 2, RuleVariable_definition = 3, 
    RuleVariable_declaration_definition = 4, RulePrint = 5, RuleFunction = 6, 
    RuleIf_statement = 7, RuleElse_statement = 8, RuleStatement = 9, RuleExpression = 10
  };

  explicit GrammarParser(antlr4::TokenStream *input);

  GrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~GrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgContext;
  class Base_typeContext;
  class Variable_declarationContext;
  class Variable_definitionContext;
  class Variable_declaration_definitionContext;
  class PrintContext;
  class FunctionContext;
  class If_statementContext;
  class Else_statementContext;
  class StatementContext;
  class ExpressionContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext() = default;
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  Base_typeContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *int_ = nullptr;
    antlr4::Token *bool_ = nullptr;
    antlr4::Token *void_ = nullptr;
    antlr4::Token *str = nullptr;
    Base_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Base_typeContext* base_type();

  class  Variable_declarationContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *var_name = nullptr;
    Variable_declarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Base_typeContext *base_type();
    antlr4::tree::TerminalNode *VARIABLE_NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declarationContext* variable_declaration();

  class  Variable_definitionContext : public antlr4::ParserRuleContext {
  public:
    Variable_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE_NAME();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_definitionContext* variable_definition();

  class  Variable_declaration_definitionContext : public antlr4::ParserRuleContext {
  public:
    Variable_declaration_definitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Base_typeContext *base_type();
    antlr4::tree::TerminalNode *VARIABLE_NAME();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declaration_definitionContext* variable_declaration_definition();

  class  PrintContext : public antlr4::ParserRuleContext {
  public:
    PrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintContext* print();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrintContext *print();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  If_statementContext : public antlr4::ParserRuleContext {
  public:
    If_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_statementContext* if_statement();

  class  Else_statementContext : public antlr4::ParserRuleContext {
  public:
    Else_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementContext *statement();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Else_statementContext* else_statement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    GrammarParser::ExpressionContext *expr = nullptr;
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Variable_declarationContext *variable_declaration();
    Variable_definitionContext *variable_definition();
    Variable_declaration_definitionContext *variable_declaration_definition();
    ExpressionContext *expression();
    std::vector<If_statementContext *> if_statement();
    If_statementContext* if_statement(size_t i);
    std::vector<Else_statementContext *> else_statement();
    Else_statementContext* else_statement(size_t i);
    FunctionContext *function();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    GrammarParser::ExpressionContext *expr1 = nullptr;
    GrammarParser::ExpressionContext *expr2 = nullptr;
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *UNARY_OPERATOR();
    antlr4::tree::TerminalNode *VARIABLE_NAME();
    antlr4::tree::TerminalNode *BINARY_OPERATOR();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

