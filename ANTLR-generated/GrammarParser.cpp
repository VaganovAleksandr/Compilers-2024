
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
      "pre_main", "prog", "base_type", "function_declaration", "array_type", 
      "parameter", "type", "parameter_list", "method", "class_field", "class_statement", 
      "class", "variable_declaration", "variable_definition", "variable_declaration_definition", 
      "print", "function", "if_statement", "else_statement", "statement", 
      "expression"
    },
    std::vector<std::string>{
      "", "'int'", "'main'", "'()'", "'{'", "'}'", "'bool'", "'void'", "'string'", 
      "'func'", "'('", "')'", "'*'", "','", "'method'", "';'", "'class'", 
      "'='", "'print'", "'if'", "'else'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "NEWLINE", "SPACE", "VARIABLE_NAME", "INTEGER", "SCHAR", 
      "STRING", "UNARY_OPERATOR", "BINARY_OPERATOR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,28,293,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,1,0,1,
  	0,3,0,45,8,0,1,1,1,1,5,1,49,8,1,10,1,12,1,52,9,1,5,1,54,8,1,10,1,12,1,
  	57,9,1,1,1,1,1,1,1,1,1,1,1,5,1,64,8,1,10,1,12,1,67,9,1,1,1,1,1,5,1,71,
  	8,1,10,1,12,1,74,9,1,5,1,76,8,1,10,1,12,1,79,9,1,1,1,1,1,1,2,1,2,1,2,
  	1,2,3,2,87,8,2,1,3,1,3,1,3,1,3,1,3,3,3,94,8,3,1,3,1,3,1,3,5,3,99,8,3,
  	10,3,12,3,102,9,3,1,3,1,3,5,3,106,8,3,10,3,12,3,109,9,3,5,3,111,8,3,10,
  	3,12,3,114,9,3,1,3,1,3,5,3,118,8,3,10,3,12,3,121,9,3,1,4,1,4,1,4,1,5,
  	1,5,1,5,1,6,1,6,3,6,131,8,6,1,7,1,7,1,7,5,7,136,8,7,10,7,12,7,139,9,7,
  	1,8,1,8,1,8,1,8,1,8,3,8,146,8,8,1,8,1,8,1,8,5,8,151,8,8,10,8,12,8,154,
  	9,8,1,8,1,8,1,8,5,8,159,8,8,10,8,12,8,162,9,8,1,8,1,8,1,9,1,9,1,9,1,9,
  	1,10,1,10,3,10,172,8,10,1,11,1,11,1,11,1,11,5,11,178,8,11,10,11,12,11,
  	181,9,11,1,11,1,11,1,11,5,11,186,8,11,10,11,12,11,189,9,11,1,11,1,11,
  	1,11,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,17,5,17,217,8,17,10,17,
  	12,17,220,9,17,1,17,1,17,5,17,224,8,17,10,17,12,17,227,9,17,1,18,5,18,
  	230,8,18,10,18,12,18,233,9,18,1,18,1,18,5,18,237,8,18,10,18,12,18,240,
  	9,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,5,19,251,8,19,10,19,
  	12,19,254,9,19,1,19,1,19,1,19,1,19,5,19,260,8,19,10,19,12,19,263,9,19,
  	1,19,3,19,266,8,19,1,19,1,19,1,19,3,19,271,8,19,1,20,1,20,1,20,3,20,276,
  	8,20,1,20,1,20,3,20,280,8,20,1,20,3,20,283,8,20,1,20,1,20,1,20,5,20,288,
  	8,20,10,20,12,20,291,9,20,1,20,0,1,40,21,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,38,40,0,0,309,0,44,1,0,0,0,2,55,1,0,0,0,4,86,
  	1,0,0,0,6,88,1,0,0,0,8,122,1,0,0,0,10,125,1,0,0,0,12,130,1,0,0,0,14,132,
  	1,0,0,0,16,140,1,0,0,0,18,165,1,0,0,0,20,171,1,0,0,0,22,173,1,0,0,0,24,
  	193,1,0,0,0,26,197,1,0,0,0,28,202,1,0,0,0,30,208,1,0,0,0,32,213,1,0,0,
  	0,34,218,1,0,0,0,36,231,1,0,0,0,38,270,1,0,0,0,40,282,1,0,0,0,42,45,3,
  	6,3,0,43,45,3,22,11,0,44,42,1,0,0,0,44,43,1,0,0,0,45,1,1,0,0,0,46,50,
  	3,0,0,0,47,49,5,21,0,0,48,47,1,0,0,0,49,52,1,0,0,0,50,48,1,0,0,0,50,51,
  	1,0,0,0,51,54,1,0,0,0,52,50,1,0,0,0,53,46,1,0,0,0,54,57,1,0,0,0,55,53,
  	1,0,0,0,55,56,1,0,0,0,56,58,1,0,0,0,57,55,1,0,0,0,58,59,5,1,0,0,59,60,
  	5,2,0,0,60,61,5,3,0,0,61,65,5,4,0,0,62,64,5,21,0,0,63,62,1,0,0,0,64,67,
  	1,0,0,0,65,63,1,0,0,0,65,66,1,0,0,0,66,77,1,0,0,0,67,65,1,0,0,0,68,72,
  	3,38,19,0,69,71,5,21,0,0,70,69,1,0,0,0,71,74,1,0,0,0,72,70,1,0,0,0,72,
  	73,1,0,0,0,73,76,1,0,0,0,74,72,1,0,0,0,75,68,1,0,0,0,76,79,1,0,0,0,77,
  	75,1,0,0,0,77,78,1,0,0,0,78,80,1,0,0,0,79,77,1,0,0,0,80,81,5,5,0,0,81,
  	3,1,0,0,0,82,87,5,1,0,0,83,87,5,6,0,0,84,87,5,7,0,0,85,87,5,8,0,0,86,
  	82,1,0,0,0,86,83,1,0,0,0,86,84,1,0,0,0,86,85,1,0,0,0,87,5,1,0,0,0,88,
  	89,5,9,0,0,89,90,3,12,6,0,90,91,5,23,0,0,91,93,5,10,0,0,92,94,3,14,7,
  	0,93,92,1,0,0,0,93,94,1,0,0,0,94,95,1,0,0,0,95,96,5,11,0,0,96,100,5,4,
  	0,0,97,99,5,21,0,0,98,97,1,0,0,0,99,102,1,0,0,0,100,98,1,0,0,0,100,101,
  	1,0,0,0,101,112,1,0,0,0,102,100,1,0,0,0,103,107,3,38,19,0,104,106,5,21,
  	0,0,105,104,1,0,0,0,106,109,1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,
  	111,1,0,0,0,109,107,1,0,0,0,110,103,1,0,0,0,111,114,1,0,0,0,112,110,1,
  	0,0,0,112,113,1,0,0,0,113,115,1,0,0,0,114,112,1,0,0,0,115,119,5,5,0,0,
  	116,118,5,21,0,0,117,116,1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,
  	120,1,0,0,0,120,7,1,0,0,0,121,119,1,0,0,0,122,123,3,4,2,0,123,124,5,12,
  	0,0,124,9,1,0,0,0,125,126,3,12,6,0,126,127,5,23,0,0,127,11,1,0,0,0,128,
  	131,3,4,2,0,129,131,3,8,4,0,130,128,1,0,0,0,130,129,1,0,0,0,131,13,1,
  	0,0,0,132,137,3,10,5,0,133,134,5,13,0,0,134,136,3,10,5,0,135,133,1,0,
  	0,0,136,139,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,138,15,1,0,0,0,139,
  	137,1,0,0,0,140,141,5,14,0,0,141,142,3,12,6,0,142,143,5,23,0,0,143,145,
  	5,10,0,0,144,146,3,14,7,0,145,144,1,0,0,0,145,146,1,0,0,0,146,147,1,0,
  	0,0,147,148,5,11,0,0,148,152,5,4,0,0,149,151,5,21,0,0,150,149,1,0,0,0,
  	151,154,1,0,0,0,152,150,1,0,0,0,152,153,1,0,0,0,153,160,1,0,0,0,154,152,
  	1,0,0,0,155,156,3,38,19,0,156,157,5,21,0,0,157,159,1,0,0,0,158,155,1,
  	0,0,0,159,162,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,163,1,0,0,0,
  	162,160,1,0,0,0,163,164,5,5,0,0,164,17,1,0,0,0,165,166,3,12,6,0,166,167,
  	5,23,0,0,167,168,5,15,0,0,168,19,1,0,0,0,169,172,3,16,8,0,170,172,3,18,
  	9,0,171,169,1,0,0,0,171,170,1,0,0,0,172,21,1,0,0,0,173,174,5,16,0,0,174,
  	175,5,23,0,0,175,179,5,4,0,0,176,178,5,21,0,0,177,176,1,0,0,0,178,181,
  	1,0,0,0,179,177,1,0,0,0,179,180,1,0,0,0,180,187,1,0,0,0,181,179,1,0,0,
  	0,182,183,3,20,10,0,183,184,5,21,0,0,184,186,1,0,0,0,185,182,1,0,0,0,
  	186,189,1,0,0,0,187,185,1,0,0,0,187,188,1,0,0,0,188,190,1,0,0,0,189,187,
  	1,0,0,0,190,191,5,5,0,0,191,192,5,15,0,0,192,23,1,0,0,0,193,194,3,12,
  	6,0,194,195,5,23,0,0,195,196,5,15,0,0,196,25,1,0,0,0,197,198,5,23,0,0,
  	198,199,5,17,0,0,199,200,3,40,20,0,200,201,5,15,0,0,201,27,1,0,0,0,202,
  	203,3,12,6,0,203,204,5,23,0,0,204,205,5,17,0,0,205,206,3,40,20,0,206,
  	207,5,15,0,0,207,29,1,0,0,0,208,209,5,18,0,0,209,210,5,10,0,0,210,211,
  	3,40,20,0,211,212,5,11,0,0,212,31,1,0,0,0,213,214,3,30,15,0,214,33,1,
  	0,0,0,215,217,5,21,0,0,216,215,1,0,0,0,217,220,1,0,0,0,218,216,1,0,0,
  	0,218,219,1,0,0,0,219,221,1,0,0,0,220,218,1,0,0,0,221,225,3,38,19,0,222,
  	224,5,21,0,0,223,222,1,0,0,0,224,227,1,0,0,0,225,223,1,0,0,0,225,226,
  	1,0,0,0,226,35,1,0,0,0,227,225,1,0,0,0,228,230,5,21,0,0,229,228,1,0,0,
  	0,230,233,1,0,0,0,231,229,1,0,0,0,231,232,1,0,0,0,232,234,1,0,0,0,233,
  	231,1,0,0,0,234,238,3,38,19,0,235,237,5,21,0,0,236,235,1,0,0,0,237,240,
  	1,0,0,0,238,236,1,0,0,0,238,239,1,0,0,0,239,37,1,0,0,0,240,238,1,0,0,
  	0,241,271,3,24,12,0,242,271,3,26,13,0,243,271,3,28,14,0,244,245,5,19,
  	0,0,245,246,5,10,0,0,246,247,3,40,20,0,247,248,5,11,0,0,248,252,5,4,0,
  	0,249,251,3,34,17,0,250,249,1,0,0,0,251,254,1,0,0,0,252,250,1,0,0,0,252,
  	253,1,0,0,0,253,255,1,0,0,0,254,252,1,0,0,0,255,265,5,5,0,0,256,257,5,
  	20,0,0,257,261,5,4,0,0,258,260,3,36,18,0,259,258,1,0,0,0,260,263,1,0,
  	0,0,261,259,1,0,0,0,261,262,1,0,0,0,262,264,1,0,0,0,263,261,1,0,0,0,264,
  	266,5,5,0,0,265,256,1,0,0,0,265,266,1,0,0,0,266,271,1,0,0,0,267,268,3,
  	32,16,0,268,269,5,15,0,0,269,271,1,0,0,0,270,241,1,0,0,0,270,242,1,0,
  	0,0,270,243,1,0,0,0,270,244,1,0,0,0,270,267,1,0,0,0,271,39,1,0,0,0,272,
  	273,6,20,-1,0,273,283,5,26,0,0,274,276,5,27,0,0,275,274,1,0,0,0,275,276,
  	1,0,0,0,276,277,1,0,0,0,277,283,5,24,0,0,278,280,5,27,0,0,279,278,1,0,
  	0,0,279,280,1,0,0,0,280,281,1,0,0,0,281,283,5,23,0,0,282,272,1,0,0,0,
  	282,275,1,0,0,0,282,279,1,0,0,0,283,289,1,0,0,0,284,285,10,4,0,0,285,
  	286,5,28,0,0,286,288,3,40,20,5,287,284,1,0,0,0,288,291,1,0,0,0,289,287,
  	1,0,0,0,289,290,1,0,0,0,290,41,1,0,0,0,291,289,1,0,0,0,32,44,50,55,65,
  	72,77,86,93,100,107,112,119,130,137,145,152,160,171,179,187,218,225,231,
  	238,252,261,265,270,275,279,282,289
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


//----------------- Pre_mainContext ------------------------------------------------------------------

GrammarParser::Pre_mainContext::Pre_mainContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::Function_declarationContext* GrammarParser::Pre_mainContext::function_declaration() {
  return getRuleContext<GrammarParser::Function_declarationContext>(0);
}

GrammarParser::ClassContext* GrammarParser::Pre_mainContext::class_() {
  return getRuleContext<GrammarParser::ClassContext>(0);
}


size_t GrammarParser::Pre_mainContext::getRuleIndex() const {
  return GrammarParser::RulePre_main;
}

void GrammarParser::Pre_mainContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPre_main(this);
}

void GrammarParser::Pre_mainContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPre_main(this);
}


std::any GrammarParser::Pre_mainContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitPre_main(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Pre_mainContext* GrammarParser::pre_main() {
  Pre_mainContext *_localctx = _tracker.createInstance<Pre_mainContext>(_ctx, getState());
  enterRule(_localctx, 0, GrammarParser::RulePre_main);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::T__8: {
        enterOuterAlt(_localctx, 1);
        setState(42);
        function_declaration();
        break;
      }

      case GrammarParser::T__15: {
        enterOuterAlt(_localctx, 2);
        setState(43);
        class_();
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

//----------------- ProgContext ------------------------------------------------------------------

GrammarParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GrammarParser::Pre_mainContext *> GrammarParser::ProgContext::pre_main() {
  return getRuleContexts<GrammarParser::Pre_mainContext>();
}

GrammarParser::Pre_mainContext* GrammarParser::ProgContext::pre_main(size_t i) {
  return getRuleContext<GrammarParser::Pre_mainContext>(i);
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
  enterRule(_localctx, 2, GrammarParser::RuleProg);
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
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::T__8

    || _la == GrammarParser::T__15) {
      setState(46);
      pre_main();
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::NEWLINE) {
        setState(47);
        match(GrammarParser::NEWLINE);
        setState(52);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(58);
    match(GrammarParser::T__0);
    setState(59);
    match(GrammarParser::T__1);
    setState(60);
    match(GrammarParser::T__2);
    setState(61);
    match(GrammarParser::T__3);
    setState(65);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(62);
      match(GrammarParser::NEWLINE);
      setState(67);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9175490) != 0)) {
      setState(68);
      statement();
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::NEWLINE) {
        setState(69);
        match(GrammarParser::NEWLINE);
        setState(74);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
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
  enterRule(_localctx, 4, GrammarParser::RuleBase_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(86);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(82);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->int_ = match(GrammarParser::T__0);
        break;
      }

      case GrammarParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(83);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->bool_ = match(GrammarParser::T__5);
        break;
      }

      case GrammarParser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(84);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->void_ = match(GrammarParser::T__6);
        break;
      }

      case GrammarParser::T__7: {
        enterOuterAlt(_localctx, 4);
        setState(85);
        antlrcpp::downCast<Base_typeContext *>(_localctx)->str = match(GrammarParser::T__7);
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

//----------------- Function_declarationContext ------------------------------------------------------------------

GrammarParser::Function_declarationContext::Function_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::TypeContext* GrammarParser::Function_declarationContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
}

tree::TerminalNode* GrammarParser::Function_declarationContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

GrammarParser::Parameter_listContext* GrammarParser::Function_declarationContext::parameter_list() {
  return getRuleContext<GrammarParser::Parameter_listContext>(0);
}

std::vector<tree::TerminalNode *> GrammarParser::Function_declarationContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::Function_declarationContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}

std::vector<GrammarParser::StatementContext *> GrammarParser::Function_declarationContext::statement() {
  return getRuleContexts<GrammarParser::StatementContext>();
}

GrammarParser::StatementContext* GrammarParser::Function_declarationContext::statement(size_t i) {
  return getRuleContext<GrammarParser::StatementContext>(i);
}


size_t GrammarParser::Function_declarationContext::getRuleIndex() const {
  return GrammarParser::RuleFunction_declaration;
}

void GrammarParser::Function_declarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_declaration(this);
}

void GrammarParser::Function_declarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_declaration(this);
}


std::any GrammarParser::Function_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitFunction_declaration(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Function_declarationContext* GrammarParser::function_declaration() {
  Function_declarationContext *_localctx = _tracker.createInstance<Function_declarationContext>(_ctx, getState());
  enterRule(_localctx, 6, GrammarParser::RuleFunction_declaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(GrammarParser::T__8);
    setState(89);
    type();
    setState(90);
    match(GrammarParser::VARIABLE_NAME);
    setState(91);
    match(GrammarParser::T__9);
    setState(93);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 450) != 0)) {
      setState(92);
      parameter_list();
    }
    setState(95);
    match(GrammarParser::T__10);
    setState(96);
    match(GrammarParser::T__3);
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(97);
      match(GrammarParser::NEWLINE);
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(112);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9175490) != 0)) {
      setState(103);
      statement();
      setState(107);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::NEWLINE) {
        setState(104);
        match(GrammarParser::NEWLINE);
        setState(109);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(114);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(115);
    match(GrammarParser::T__4);
    setState(119);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(116);
        match(GrammarParser::NEWLINE); 
      }
      setState(121);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_typeContext ------------------------------------------------------------------

GrammarParser::Array_typeContext::Array_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::Base_typeContext* GrammarParser::Array_typeContext::base_type() {
  return getRuleContext<GrammarParser::Base_typeContext>(0);
}


size_t GrammarParser::Array_typeContext::getRuleIndex() const {
  return GrammarParser::RuleArray_type;
}

void GrammarParser::Array_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_type(this);
}

void GrammarParser::Array_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_type(this);
}


std::any GrammarParser::Array_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitArray_type(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Array_typeContext* GrammarParser::array_type() {
  Array_typeContext *_localctx = _tracker.createInstance<Array_typeContext>(_ctx, getState());
  enterRule(_localctx, 8, GrammarParser::RuleArray_type);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    base_type();
    setState(123);
    match(GrammarParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

GrammarParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::TypeContext* GrammarParser::ParameterContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
}

tree::TerminalNode* GrammarParser::ParameterContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}


size_t GrammarParser::ParameterContext::getRuleIndex() const {
  return GrammarParser::RuleParameter;
}

void GrammarParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void GrammarParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


std::any GrammarParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::ParameterContext* GrammarParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 10, GrammarParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    type();
    setState(126);
    match(GrammarParser::VARIABLE_NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

GrammarParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::Base_typeContext* GrammarParser::TypeContext::base_type() {
  return getRuleContext<GrammarParser::Base_typeContext>(0);
}

GrammarParser::Array_typeContext* GrammarParser::TypeContext::array_type() {
  return getRuleContext<GrammarParser::Array_typeContext>(0);
}


size_t GrammarParser::TypeContext::getRuleIndex() const {
  return GrammarParser::RuleType;
}

void GrammarParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void GrammarParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any GrammarParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::TypeContext* GrammarParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 12, GrammarParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(128);
      base_type();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(129);
      array_type();
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

//----------------- Parameter_listContext ------------------------------------------------------------------

GrammarParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GrammarParser::ParameterContext *> GrammarParser::Parameter_listContext::parameter() {
  return getRuleContexts<GrammarParser::ParameterContext>();
}

GrammarParser::ParameterContext* GrammarParser::Parameter_listContext::parameter(size_t i) {
  return getRuleContext<GrammarParser::ParameterContext>(i);
}


size_t GrammarParser::Parameter_listContext::getRuleIndex() const {
  return GrammarParser::RuleParameter_list;
}

void GrammarParser::Parameter_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_list(this);
}

void GrammarParser::Parameter_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_list(this);
}


std::any GrammarParser::Parameter_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitParameter_list(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Parameter_listContext* GrammarParser::parameter_list() {
  Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, getState());
  enterRule(_localctx, 14, GrammarParser::RuleParameter_list);
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
    setState(132);
    parameter();
    setState(137);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::T__12) {
      setState(133);
      match(GrammarParser::T__12);
      setState(134);
      parameter();
      setState(139);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodContext ------------------------------------------------------------------

GrammarParser::MethodContext::MethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::TypeContext* GrammarParser::MethodContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
}

tree::TerminalNode* GrammarParser::MethodContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

GrammarParser::Parameter_listContext* GrammarParser::MethodContext::parameter_list() {
  return getRuleContext<GrammarParser::Parameter_listContext>(0);
}

std::vector<tree::TerminalNode *> GrammarParser::MethodContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::MethodContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}

std::vector<GrammarParser::StatementContext *> GrammarParser::MethodContext::statement() {
  return getRuleContexts<GrammarParser::StatementContext>();
}

GrammarParser::StatementContext* GrammarParser::MethodContext::statement(size_t i) {
  return getRuleContext<GrammarParser::StatementContext>(i);
}


size_t GrammarParser::MethodContext::getRuleIndex() const {
  return GrammarParser::RuleMethod;
}

void GrammarParser::MethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethod(this);
}

void GrammarParser::MethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethod(this);
}


std::any GrammarParser::MethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitMethod(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::MethodContext* GrammarParser::method() {
  MethodContext *_localctx = _tracker.createInstance<MethodContext>(_ctx, getState());
  enterRule(_localctx, 16, GrammarParser::RuleMethod);
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
    setState(140);
    match(GrammarParser::T__13);
    setState(141);
    type();
    setState(142);
    match(GrammarParser::VARIABLE_NAME);
    setState(143);
    match(GrammarParser::T__9);
    setState(145);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 450) != 0)) {
      setState(144);
      parameter_list();
    }
    setState(147);
    match(GrammarParser::T__10);
    setState(148);
    match(GrammarParser::T__3);
    setState(152);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(149);
      match(GrammarParser::NEWLINE);
      setState(154);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(160);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 9175490) != 0)) {
      setState(155);
      statement();
      setState(156);
      match(GrammarParser::NEWLINE);
      setState(162);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(163);
    match(GrammarParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_fieldContext ------------------------------------------------------------------

GrammarParser::Class_fieldContext::Class_fieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::TypeContext* GrammarParser::Class_fieldContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
}

tree::TerminalNode* GrammarParser::Class_fieldContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}


size_t GrammarParser::Class_fieldContext::getRuleIndex() const {
  return GrammarParser::RuleClass_field;
}

void GrammarParser::Class_fieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_field(this);
}

void GrammarParser::Class_fieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_field(this);
}


std::any GrammarParser::Class_fieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitClass_field(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Class_fieldContext* GrammarParser::class_field() {
  Class_fieldContext *_localctx = _tracker.createInstance<Class_fieldContext>(_ctx, getState());
  enterRule(_localctx, 18, GrammarParser::RuleClass_field);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    type();
    setState(166);
    match(GrammarParser::VARIABLE_NAME);
    setState(167);
    match(GrammarParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Class_statementContext ------------------------------------------------------------------

GrammarParser::Class_statementContext::Class_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::MethodContext* GrammarParser::Class_statementContext::method() {
  return getRuleContext<GrammarParser::MethodContext>(0);
}

GrammarParser::Class_fieldContext* GrammarParser::Class_statementContext::class_field() {
  return getRuleContext<GrammarParser::Class_fieldContext>(0);
}


size_t GrammarParser::Class_statementContext::getRuleIndex() const {
  return GrammarParser::RuleClass_statement;
}

void GrammarParser::Class_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass_statement(this);
}

void GrammarParser::Class_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass_statement(this);
}


std::any GrammarParser::Class_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitClass_statement(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Class_statementContext* GrammarParser::class_statement() {
  Class_statementContext *_localctx = _tracker.createInstance<Class_statementContext>(_ctx, getState());
  enterRule(_localctx, 20, GrammarParser::RuleClass_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(171);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(169);
        method();
        break;
      }

      case GrammarParser::T__0:
      case GrammarParser::T__5:
      case GrammarParser::T__6:
      case GrammarParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(170);
        class_field();
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

//----------------- ClassContext ------------------------------------------------------------------

GrammarParser::ClassContext::ClassContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammarParser::ClassContext::VARIABLE_NAME() {
  return getToken(GrammarParser::VARIABLE_NAME, 0);
}

std::vector<tree::TerminalNode *> GrammarParser::ClassContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::ClassContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}

std::vector<GrammarParser::Class_statementContext *> GrammarParser::ClassContext::class_statement() {
  return getRuleContexts<GrammarParser::Class_statementContext>();
}

GrammarParser::Class_statementContext* GrammarParser::ClassContext::class_statement(size_t i) {
  return getRuleContext<GrammarParser::Class_statementContext>(i);
}


size_t GrammarParser::ClassContext::getRuleIndex() const {
  return GrammarParser::RuleClass;
}

void GrammarParser::ClassContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClass(this);
}

void GrammarParser::ClassContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClass(this);
}


std::any GrammarParser::ClassContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitClass(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::ClassContext* GrammarParser::class_() {
  ClassContext *_localctx = _tracker.createInstance<ClassContext>(_ctx, getState());
  enterRule(_localctx, 22, GrammarParser::RuleClass);
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
    setState(173);
    match(GrammarParser::T__15);
    setState(174);
    match(GrammarParser::VARIABLE_NAME);
    setState(175);
    match(GrammarParser::T__3);
    setState(179);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(176);
      match(GrammarParser::NEWLINE);
      setState(181);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(187);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 16834) != 0)) {
      setState(182);
      class_statement();
      setState(183);
      match(GrammarParser::NEWLINE);
      setState(189);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(190);
    match(GrammarParser::T__4);
    setState(191);
    match(GrammarParser::T__14);
   
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

GrammarParser::TypeContext* GrammarParser::Variable_declarationContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
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
  enterRule(_localctx, 24, GrammarParser::RuleVariable_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(193);
    type();
    setState(194);
    antlrcpp::downCast<Variable_declarationContext *>(_localctx)->var_name = match(GrammarParser::VARIABLE_NAME);
    setState(195);
    match(GrammarParser::T__14);
   
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
  enterRule(_localctx, 26, GrammarParser::RuleVariable_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    match(GrammarParser::VARIABLE_NAME);
    setState(198);
    match(GrammarParser::T__16);
    setState(199);
    expression(0);
    setState(200);
    match(GrammarParser::T__14);
   
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

GrammarParser::TypeContext* GrammarParser::Variable_declaration_definitionContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
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
  enterRule(_localctx, 28, GrammarParser::RuleVariable_declaration_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    type();
    setState(203);
    match(GrammarParser::VARIABLE_NAME);
    setState(204);
    match(GrammarParser::T__16);
    setState(205);
    expression(0);
    setState(206);
    match(GrammarParser::T__14);
   
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
  enterRule(_localctx, 30, GrammarParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(GrammarParser::T__17);
    setState(209);
    match(GrammarParser::T__9);
    setState(210);
    expression(0);
    setState(211);
    match(GrammarParser::T__10);
   
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
  enterRule(_localctx, 32, GrammarParser::RuleFunction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    print();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

GrammarParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::StatementContext* GrammarParser::If_statementContext::statement() {
  return getRuleContext<GrammarParser::StatementContext>(0);
}

std::vector<tree::TerminalNode *> GrammarParser::If_statementContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::If_statementContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}


size_t GrammarParser::If_statementContext::getRuleIndex() const {
  return GrammarParser::RuleIf_statement;
}

void GrammarParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void GrammarParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


std::any GrammarParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::If_statementContext* GrammarParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 34, GrammarParser::RuleIf_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(218);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(215);
      match(GrammarParser::NEWLINE);
      setState(220);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(221);
    statement();
    setState(225);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(222);
        match(GrammarParser::NEWLINE); 
      }
      setState(227);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_statementContext ------------------------------------------------------------------

GrammarParser::Else_statementContext::Else_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::StatementContext* GrammarParser::Else_statementContext::statement() {
  return getRuleContext<GrammarParser::StatementContext>(0);
}

std::vector<tree::TerminalNode *> GrammarParser::Else_statementContext::NEWLINE() {
  return getTokens(GrammarParser::NEWLINE);
}

tree::TerminalNode* GrammarParser::Else_statementContext::NEWLINE(size_t i) {
  return getToken(GrammarParser::NEWLINE, i);
}


size_t GrammarParser::Else_statementContext::getRuleIndex() const {
  return GrammarParser::RuleElse_statement;
}

void GrammarParser::Else_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_statement(this);
}

void GrammarParser::Else_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_statement(this);
}


std::any GrammarParser::Else_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitElse_statement(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::Else_statementContext* GrammarParser::else_statement() {
  Else_statementContext *_localctx = _tracker.createInstance<Else_statementContext>(_ctx, getState());
  enterRule(_localctx, 36, GrammarParser::RuleElse_statement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(231);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::NEWLINE) {
      setState(228);
      match(GrammarParser::NEWLINE);
      setState(233);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(234);
    statement();
    setState(238);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(235);
        match(GrammarParser::NEWLINE); 
      }
      setState(240);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
   
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

std::vector<GrammarParser::If_statementContext *> GrammarParser::StatementContext::if_statement() {
  return getRuleContexts<GrammarParser::If_statementContext>();
}

GrammarParser::If_statementContext* GrammarParser::StatementContext::if_statement(size_t i) {
  return getRuleContext<GrammarParser::If_statementContext>(i);
}

std::vector<GrammarParser::Else_statementContext *> GrammarParser::StatementContext::else_statement() {
  return getRuleContexts<GrammarParser::Else_statementContext>();
}

GrammarParser::Else_statementContext* GrammarParser::StatementContext::else_statement(size_t i) {
  return getRuleContext<GrammarParser::Else_statementContext>(i);
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
  enterRule(_localctx, 38, GrammarParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(270);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(241);
      variable_declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(242);
      variable_definition();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(243);
      variable_declaration_definition();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(244);
      match(GrammarParser::T__18);
      setState(245);
      match(GrammarParser::T__9);
      setState(246);
      antlrcpp::downCast<StatementContext *>(_localctx)->expr = expression(0);
      setState(247);
      match(GrammarParser::T__10);
      setState(248);
      match(GrammarParser::T__3);
      setState(252);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 11272642) != 0)) {
        setState(249);
        if_statement();
        setState(254);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(255);
      match(GrammarParser::T__4);
      setState(265);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GrammarParser::T__19) {
        setState(256);
        match(GrammarParser::T__19);
        setState(257);
        match(GrammarParser::T__3);
        setState(261);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 11272642) != 0)) {
          setState(258);
          else_statement();
          setState(263);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(264);
        match(GrammarParser::T__4);
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(267);
      function();
      setState(268);
      match(GrammarParser::T__14);
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

tree::TerminalNode* GrammarParser::ExpressionContext::STRING() {
  return getToken(GrammarParser::STRING, 0);
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
  size_t startState = 40;
  enterRecursionRule(_localctx, 40, GrammarParser::RuleExpression, precedence);

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
    setState(282);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(273);
      match(GrammarParser::STRING);
      break;
    }

    case 2: {
      setState(275);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GrammarParser::UNARY_OPERATOR) {
        setState(274);
        match(GrammarParser::UNARY_OPERATOR);
      }
      setState(277);
      match(GrammarParser::INTEGER);
      break;
    }

    case 3: {
      setState(279);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == GrammarParser::UNARY_OPERATOR) {
        setState(278);
        match(GrammarParser::UNARY_OPERATOR);
      }
      setState(281);
      match(GrammarParser::VARIABLE_NAME);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(289);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        _localctx->expr1 = previousContext;
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(284);

        if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
        setState(285);
        match(GrammarParser::BINARY_OPERATOR);
        setState(286);
        antlrcpp::downCast<ExpressionContext *>(_localctx)->expr2 = expression(5); 
      }
      setState(291);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
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
    case 20: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GrammarParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);

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
