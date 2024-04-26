
// Generated from Grammar.g4 by ANTLR 4.13.1


#include "GrammarListener.h"
#include "GrammarVisitor.h"

#include "GrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GrammarParserStaticData final {
  GrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrammarParserStaticData(const GrammarParserStaticData&) = delete;
  GrammarParserStaticData(GrammarParserStaticData&&) = delete;
  GrammarParserStaticData& operator=(const GrammarParserStaticData&) = delete;
  GrammarParserStaticData& operator=(GrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag grammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
GrammarParserStaticData *grammarParserStaticData = nullptr;

void grammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (grammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(grammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GrammarParserStaticData>(
    std::vector<std::string>{
      "prog", "base_type", "variable_declaration", "variable_definition", 
      "variable_declaration_definition", "print", "function", "statement", 
      "expression"
    },
    std::vector<std::string>{
      "", "'int'", "'main'", "'()'", "'{'", "'}'", "'bool'", "'void'", "';'", 
      "'='", "'print'", "'('", "')'", "'if'", "'else'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "NEWLINE", 
      "SPACE", "VARIABLE_NAME", "INTEGER", "UNARY_OPERATOR", "BINARY_OPERATOR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,20,141,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,1,0,1,0,1,0,1,0,1,0,5,0,24,8,0,10,0,12,0,27,9,0,1,0,1,0,
  	5,0,31,8,0,10,0,12,0,34,9,0,5,0,36,8,0,10,0,12,0,39,9,0,1,0,1,0,1,1,1,
  	1,1,1,3,1,46,8,1,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,
  	7,5,7,79,8,7,10,7,12,7,82,9,7,1,7,1,7,5,7,86,8,7,10,7,12,7,89,9,7,5,7,
  	91,8,7,10,7,12,7,94,9,7,1,7,1,7,1,7,1,7,5,7,100,8,7,10,7,12,7,103,9,7,
  	1,7,1,7,5,7,107,8,7,10,7,12,7,110,9,7,5,7,112,8,7,10,7,12,7,115,9,7,1,
  	7,3,7,118,8,7,1,7,1,7,1,7,3,7,123,8,7,1,8,1,8,3,8,127,8,8,1,8,1,8,3,8,
  	131,8,8,1,8,1,8,1,8,5,8,136,8,8,10,8,12,8,139,9,8,1,8,0,1,16,9,0,2,4,
  	6,8,10,12,14,16,0,0,150,0,18,1,0,0,0,2,45,1,0,0,0,4,47,1,0,0,0,6,51,1,
  	0,0,0,8,56,1,0,0,0,10,62,1,0,0,0,12,67,1,0,0,0,14,122,1,0,0,0,16,130,
  	1,0,0,0,18,19,5,1,0,0,19,20,5,2,0,0,20,21,5,3,0,0,21,25,5,4,0,0,22,24,
  	5,15,0,0,23,22,1,0,0,0,24,27,1,0,0,0,25,23,1,0,0,0,25,26,1,0,0,0,26,37,
  	1,0,0,0,27,25,1,0,0,0,28,32,3,14,7,0,29,31,5,15,0,0,30,29,1,0,0,0,31,
  	34,1,0,0,0,32,30,1,0,0,0,32,33,1,0,0,0,33,36,1,0,0,0,34,32,1,0,0,0,35,
  	28,1,0,0,0,36,39,1,0,0,0,37,35,1,0,0,0,37,38,1,0,0,0,38,40,1,0,0,0,39,
  	37,1,0,0,0,40,41,5,5,0,0,41,1,1,0,0,0,42,46,5,1,0,0,43,46,5,6,0,0,44,
  	46,5,7,0,0,45,42,1,0,0,0,45,43,1,0,0,0,45,44,1,0,0,0,46,3,1,0,0,0,47,
  	48,3,2,1,0,48,49,5,17,0,0,49,50,5,8,0,0,50,5,1,0,0,0,51,52,5,17,0,0,52,
  	53,5,9,0,0,53,54,3,16,8,0,54,55,5,8,0,0,55,7,1,0,0,0,56,57,3,2,1,0,57,
  	58,5,17,0,0,58,59,5,9,0,0,59,60,3,16,8,0,60,61,5,8,0,0,61,9,1,0,0,0,62,
  	63,5,10,0,0,63,64,5,11,0,0,64,65,3,16,8,0,65,66,5,12,0,0,66,11,1,0,0,
  	0,67,68,3,10,5,0,68,13,1,0,0,0,69,123,3,4,2,0,70,123,3,6,3,0,71,123,3,
  	8,4,0,72,73,5,13,0,0,73,74,5,11,0,0,74,75,3,16,8,0,75,76,5,12,0,0,76,
  	80,5,4,0,0,77,79,5,15,0,0,78,77,1,0,0,0,79,82,1,0,0,0,80,78,1,0,0,0,80,
  	81,1,0,0,0,81,92,1,0,0,0,82,80,1,0,0,0,83,87,3,14,7,0,84,86,5,15,0,0,
  	85,84,1,0,0,0,86,89,1,0,0,0,87,85,1,0,0,0,87,88,1,0,0,0,88,91,1,0,0,0,
  	89,87,1,0,0,0,90,83,1,0,0,0,91,94,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,
  	93,95,1,0,0,0,94,92,1,0,0,0,95,117,5,5,0,0,96,97,5,14,0,0,97,101,5,4,
  	0,0,98,100,5,15,0,0,99,98,1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,
  	102,1,0,0,0,102,113,1,0,0,0,103,101,1,0,0,0,104,108,3,14,7,0,105,107,
  	5,15,0,0,106,105,1,0,0,0,107,110,1,0,0,0,108,106,1,0,0,0,108,109,1,0,
  	0,0,109,112,1,0,0,0,110,108,1,0,0,0,111,104,1,0,0,0,112,115,1,0,0,0,113,
  	111,1,0,0,0,113,114,1,0,0,0,114,116,1,0,0,0,115,113,1,0,0,0,116,118,5,
  	5,0,0,117,96,1,0,0,0,117,118,1,0,0,0,118,123,1,0,0,0,119,120,3,12,6,0,
  	120,121,5,8,0,0,121,123,1,0,0,0,122,69,1,0,0,0,122,70,1,0,0,0,122,71,
  	1,0,0,0,122,72,1,0,0,0,122,119,1,0,0,0,123,15,1,0,0,0,124,126,6,8,-1,
  	0,125,127,5,19,0,0,126,125,1,0,0,0,126,127,1,0,0,0,127,128,1,0,0,0,128,
  	131,5,18,0,0,129,131,5,17,0,0,130,124,1,0,0,0,130,129,1,0,0,0,131,137,
  	1,0,0,0,132,133,10,3,0,0,133,134,5,20,0,0,134,136,3,16,8,4,135,132,1,
  	0,0,0,136,139,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,138,17,1,0,0,0,
  	139,137,1,0,0,0,15,25,32,37,45,80,87,92,101,108,113,117,122,126,130,137
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grammarParserStaticData = staticData.release();
}

}

GrammarParser::GrammarParser(TokenStream *input) : GrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

GrammarParser::GrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  GrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *grammarParserStaticData->atn, grammarParserStaticData->decisionToDFA, grammarParserStaticData->sharedContextCache, options);
}

GrammarParser::~GrammarParser() {
  delete _interpreter;
}

const atn::ATN& GrammarParser::getATN() const {
  return *grammarParserStaticData->atn;
}

std::string GrammarParser::getGrammarFileName() const {
  return "Grammar.g4";
}

const std::vector<std::string>& GrammarParser::getRuleNames() const {
  return grammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& GrammarParser::getVocabulary() const {
  return grammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GrammarParser::getSerializedATN() const {
  return grammarParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

GrammarParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GrammarParser::ProgContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::ProgContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}

std::vector<GrammarParser::StatementContext *> GrammarParser::ProgContext::statement() {
  return getRuleContexts<GrammarParser::StatementContext>();
}

GrammarParser::StatementContext* GrammarParser::ProgContext::statement(size_t i) {
  return getRuleContext<GrammarParser::StatementContext>(i);
}


size_t GrammarParser::ProgContext::getRuleIndex() const {
  return GrammarParser::RuleProg;
}

void GrammarParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void GrammarParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


std::any GrammarParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::ProgContext* GrammarParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, GrammarParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    match(GrammarParser::T__0);
    setState(19);
    match(GrammarParser::T__1);
    setState(20);
    match(GrammarParser::T__2);
    setState(21);
    match(GrammarParser::T__3);
    setState(25);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(22);
      match(GrammarParser::NEWLINE);
      setState(27);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 140482) != 0)) {
      setState(28);
      statement();
      setState(32);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::NEWLINE) {
        setState(29);
        match(GrammarParser::NEWLINE);
        setState(34);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(40);
    match(GrammarParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Base_typeContext ------------------------------------------------------------------

GrammarParser::Base_typeContext::Base_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::Base_typeContext::getRuleIndex() const {
  return GrammarParser::RuleBase_type;
}

void GrammarParser::Base_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBase_type(this);
}

void GrammarParser::Base_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBase_type(this);
}


std::any GrammarParser::Base_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitBase_type(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Base_typeContext* GrammarParser::base_type() {
  Base_typeContext *_localctx = _tracker.createInstance<Base_typeContext>(_ctx, getState());
  enterRule(_localctx, 2, GrammarParser::RuleBase_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(45);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(42);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->int_ = match(GrammarParser::T__0);
        break;
      }

      case GrammarParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(43);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->bool_ = match(GrammarParser::T__5);
        break;
      }

      case GrammarParser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(44);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->void_ = match(GrammarParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declarationContext ------------------------------------------------------------------

GrammarParser::Variable_declarationContext::Variable_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::Base_typeContext* GrammarParser::Variable_declarationContext::base_type() {
  return getRuleContext<GrammarParser::Base_typeContext>(0);
}

tree::TerminalNode* GrammarParser::Variable_declarationContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}


size_t GrammarParser::Variable_declarationContext::getRuleIndex() const {
  return GrammarParser::RuleVariable_declaration;
}

void GrammarParser::Variable_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_declaration(this);
}

void GrammarParser::Variable_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_declaration(this);
}


std::any GrammarParser::Variable_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitVariable_declaration(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Variable_declarationContext* GrammarParser::variable_declaration() {
  Variable_declarationContext *_localctx = _tracker.createInstance<Variable_declarationContext>(_ctx, getState());
  enterRule(_localctx, 4, GrammarParser::RuleVariable_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    base_type();
    setState(48);
    antlrcpp::downCast<Variable_declarationContext *>(_localctx)->var_name = match(GrammarParser::VARIABLE_NAME);
    setState(49);
    match(GrammarParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_definitionContext ------------------------------------------------------------------

GrammarParser::Variable_definitionContext::Variable_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammarParser::Variable_definitionContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

GrammarParser::ExpressionContext* GrammarParser::Variable_definitionContext::expression() {
  return getRuleContext<GrammarParser::ExpressionContext>(0);
}


size_t GrammarParser::Variable_definitionContext::getRuleIndex() const {
  return GrammarParser::RuleVariable_definition;
}

void GrammarParser::Variable_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_definition(this);
}

void GrammarParser::Variable_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_definition(this);
}


std::any GrammarParser::Variable_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitVariable_definition(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Variable_definitionContext* GrammarParser::variable_definition() {
  Variable_definitionContext *_localctx = _tracker.createInstance<Variable_definitionContext>(_ctx, getState());
  enterRule(_localctx, 6, GrammarParser::RuleVariable_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(GrammarParser::VARIABLE_NAME);
    setState(52);
    match(GrammarParser::T__8);
    setState(53);
    expression(0);
    setState(54);
    match(GrammarParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declaration_definitionContext ------------------------------------------------------------------

GrammarParser::Variable_declaration_definitionContext::Variable_declaration_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::Base_typeContext* GrammarParser::Variable_declaration_definitionContext::base_type() {
  return getRuleContext<GrammarParser::Base_typeContext>(0);
}

tree::TerminalNode* GrammarParser::Variable_declaration_definitionContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

GrammarParser::ExpressionContext* GrammarParser::Variable_declaration_definitionContext::expression() {
  return getRuleContext<GrammarParser::ExpressionContext>(0);
}


size_t GrammarParser::Variable_declaration_definitionContext::getRuleIndex() const {
  return GrammarParser::RuleVariable_declaration_definition;
}

void GrammarParser::Variable_declaration_definitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_declaration_definition(this);
}

void GrammarParser::Variable_declaration_definitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_declaration_definition(this);
}


std::any GrammarParser::Variable_declaration_definitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitVariable_declaration_definition(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Variable_declaration_definitionContext* GrammarParser::variable_declaration_definition() {
  Variable_declaration_definitionContext *_localctx = _tracker.createInstance<Variable_declaration_definitionContext>(_ctx, getState());
  enterRule(_localctx, 8, GrammarParser::RuleVariable_declaration_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    base_type();
    setState(57);
    match(GrammarParser::VARIABLE_NAME);
    setState(58);
    match(GrammarParser::T__8);
    setState(59);
    expression(0);
    setState(60);
    match(GrammarParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

GrammarParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::ExpressionContext* GrammarParser::PrintContext::expression() {
  return getRuleContext<GrammarParser::ExpressionContext>(0);
}


size_t GrammarParser::PrintContext::getRuleIndex() const {
  return GrammarParser::RulePrint;
}

void GrammarParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void GrammarParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}


std::any GrammarParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::PrintContext* GrammarParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 10, GrammarParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(GrammarParser::T__9);
    setState(63);
    match(GrammarParser::T__10);
    setState(64);
    expression(0);
    setState(65);
    match(GrammarParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

GrammarParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::PrintContext* GrammarParser::FunctionContext::print() {
  return getRuleContext<GrammarParser::PrintContext>(0);
}


size_t GrammarParser::FunctionContext::getRuleIndex() const {
  return GrammarParser::RuleFunction;
}

void GrammarParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void GrammarParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


std::any GrammarParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::FunctionContext* GrammarParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 12, GrammarParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    print();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

GrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::Variable_declarationContext* GrammarParser::StatementContext::variable_declaration() {
  return getRuleContext<GrammarParser::Variable_declarationContext>(0);
}

GrammarParser::Variable_definitionContext* GrammarParser::StatementContext::variable_definition() {
  return getRuleContext<GrammarParser::Variable_definitionContext>(0);
}

GrammarParser::Variable_declaration_definitionContext* GrammarParser::StatementContext::variable_declaration_definition() {
  return getRuleContext<GrammarParser::Variable_declaration_definitionContext>(0);
}

GrammarParser::ExpressionContext* GrammarParser::StatementContext::expression() {
  return getRuleContext<GrammarParser::ExpressionContext>(0);
}

std::vector<tree::TerminalNode *> GrammarParser::StatementContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::StatementContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}

std::vector<GrammarParser::StatementContext *> GrammarParser::StatementContext::statement() {
  return getRuleContexts<GrammarParser::StatementContext>();
}

GrammarParser::StatementContext* GrammarParser::StatementContext::statement(size_t i) {
  return getRuleContext<GrammarParser::StatementContext>(i);
}

GrammarParser::FunctionContext* GrammarParser::StatementContext::function() {
  return getRuleContext<GrammarParser::FunctionContext>(0);
}


size_t GrammarParser::StatementContext::getRuleIndex() const {
  return GrammarParser::RuleStatement;
}

void GrammarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void GrammarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any GrammarParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::StatementContext* GrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 14, GrammarParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(69);
      variable_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(70);
      variable_definition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(71);
      variable_declaration_definition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(72);
      match(GrammarParser::T__12);
      setState(73);
      match(GrammarParser::T__10);
      setState(74);
      antlrcpp::downCast<StatementContext *>(_localctx)->expr = expression(0);
      setState(75);
      match(GrammarParser::T__11);
      setState(76);
      match(GrammarParser::T__3);
      setState(80);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::NEWLINE) {
        setState(77);
        match(GrammarParser::NEWLINE);
        setState(82);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(92);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 140482) != 0)) {
        setState(83);
        antlrcpp::downCast<StatementContext *>(_localctx)->if_ = statement();
        setState(87);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == GrammarParser::NEWLINE) {
          setState(84);
          match(GrammarParser::NEWLINE);
          setState(89);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(94);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(95);
      match(GrammarParser::T__4);
      setState(117);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GrammarParser::T__13) {
        setState(96);
        match(GrammarParser::T__13);
        setState(97);
        match(GrammarParser::T__3);
        setState(101);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == GrammarParser::NEWLINE) {
          setState(98);
          match(GrammarParser::NEWLINE);
          setState(103);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(113);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 140482) != 0)) {
          setState(104);
          antlrcpp::downCast<StatementContext *>(_localctx)->else_ = statement();
          setState(108);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == GrammarParser::NEWLINE) {
            setState(105);
            match(GrammarParser::NEWLINE);
            setState(110);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(115);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(116);
        match(GrammarParser::T__4);
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(119);
      function();
      setState(120);
      match(GrammarParser::T__7);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

GrammarParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammarParser::ExpressionContext::INTEGER() {
  return getToken(GrammarParser::INTEGER, 0);
}

tree::TerminalNode* GrammarParser::ExpressionContext::UNARY_OPERATOR() {
  return getToken(GrammarParser::UNARY_OPERATOR, 0);
}

tree::TerminalNode* GrammarParser::ExpressionContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

tree::TerminalNode* GrammarParser::ExpressionContext::BINARY_OPERATOR() {
  return getToken(GrammarParser::BINARY_OPERATOR, 0);
}

std::vector<GrammarParser::ExpressionContext *> GrammarParser::ExpressionContext::expression() {
  return getRuleContexts<GrammarParser::ExpressionContext>();
}

GrammarParser::ExpressionContext* GrammarParser::ExpressionContext::expression(size_t i) {
  return getRuleContext<GrammarParser::ExpressionContext>(i);
}


size_t GrammarParser::ExpressionContext::getRuleIndex() const {
  return GrammarParser::RuleExpression;
}

void GrammarParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void GrammarParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


std::any GrammarParser::ExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitExpression(this);
  else
    return visitor->visitChildren(this);
}


GrammarParser::ExpressionContext* GrammarParser::expression() {
   return expression(0);
}

GrammarParser::ExpressionContext* GrammarParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GrammarParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  GrammarParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, GrammarParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::INTEGER:
      case GrammarParser::UNARY_OPERATOR: {
        setState(126);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GrammarParser::UNARY_OPERATOR) {
          setState(125);
          match(GrammarParser::UNARY_OPERATOR);
        }
        setState(128);
        match(GrammarParser::INTEGER);
        break;
      }

      case GrammarParser::VARIABLE_NAME: {
        setState(129);
        match(GrammarParser::VARIABLE_NAME);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(137);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        _localctx->expr1 = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(132);

        if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
        setState(133);
        match(GrammarParser::BINARY_OPERATOR);
        setState(134);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expr2 = expression(4); 
      }
      setState(139);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool GrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 8: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GrammarParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void GrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  grammarParserInitialize();
#else
  ::antlr4::internal::call_once(grammarParserOnceFlag, grammarParserInitialize);
#endif
}
