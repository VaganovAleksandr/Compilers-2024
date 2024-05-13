
// Generated from Grammar.g4 by ANTLR 4.13.1


#include "GrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct GrammarLexerStaticData final {
  GrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GrammarLexerStaticData(const GrammarLexerStaticData&) = delete;
  GrammarLexerStaticData(GrammarLexerStaticData&&) = delete;
  GrammarLexerStaticData& operator=(const GrammarLexerStaticData&) = delete;
  GrammarLexerStaticData& operator=(GrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag grammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
GrammarLexerStaticData *grammarlexerLexerStaticData = nullptr;

void grammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (grammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(grammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GrammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "NEWLINE", "SPACE", 
      "VARIABLE_NAME", "INTEGER", "SCHAR", "STRING", "UNARY_OPERATOR", "BINARY_OPERATOR"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'int'", "'main'", "'()'", "'{'", "'}'", "'bool'", "'void'", "'string'", 
      "';'", "'='", "'print'", "'('", "')'", "'if'", "'else'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "NEWLINE", 
      "SPACE", "VARIABLE_NAME", "INTEGER", "SCHAR", "STRING", "UNARY_OPERATOR", 
      "BINARY_OPERATOR"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,23,148,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,
  	3,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,12,
  	1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,14,1,14,1,15,4,15,104,8,15,11,15,
  	12,15,105,1,16,1,16,1,16,1,16,1,17,4,17,113,8,17,11,17,12,17,114,1,18,
  	1,18,4,18,119,8,18,11,18,12,18,120,1,18,3,18,124,8,18,1,19,1,19,1,20,
  	1,20,5,20,130,8,20,10,20,12,20,133,9,20,1,20,1,20,1,21,1,21,1,22,1,22,
  	1,22,1,22,1,22,1,22,1,22,1,22,3,22,147,8,22,0,0,23,1,1,3,2,5,3,7,4,9,
  	5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,
  	35,18,37,19,39,20,41,21,43,22,45,23,1,0,8,2,0,10,10,13,13,2,0,9,9,32,
  	32,2,0,65,90,97,122,1,0,49,57,1,0,48,57,9,0,10,10,13,13,34,34,38,38,42,
  	43,45,45,47,47,92,92,94,94,3,0,38,38,42,42,45,45,3,0,42,43,45,45,47,47,
  	156,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,
  	1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,
  	0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,
  	0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,
  	1,0,0,0,0,45,1,0,0,0,1,47,1,0,0,0,3,51,1,0,0,0,5,56,1,0,0,0,7,59,1,0,
  	0,0,9,61,1,0,0,0,11,63,1,0,0,0,13,68,1,0,0,0,15,73,1,0,0,0,17,80,1,0,
  	0,0,19,82,1,0,0,0,21,84,1,0,0,0,23,90,1,0,0,0,25,92,1,0,0,0,27,94,1,0,
  	0,0,29,97,1,0,0,0,31,103,1,0,0,0,33,107,1,0,0,0,35,112,1,0,0,0,37,123,
  	1,0,0,0,39,125,1,0,0,0,41,127,1,0,0,0,43,136,1,0,0,0,45,146,1,0,0,0,47,
  	48,5,105,0,0,48,49,5,110,0,0,49,50,5,116,0,0,50,2,1,0,0,0,51,52,5,109,
  	0,0,52,53,5,97,0,0,53,54,5,105,0,0,54,55,5,110,0,0,55,4,1,0,0,0,56,57,
  	5,40,0,0,57,58,5,41,0,0,58,6,1,0,0,0,59,60,5,123,0,0,60,8,1,0,0,0,61,
  	62,5,125,0,0,62,10,1,0,0,0,63,64,5,98,0,0,64,65,5,111,0,0,65,66,5,111,
  	0,0,66,67,5,108,0,0,67,12,1,0,0,0,68,69,5,118,0,0,69,70,5,111,0,0,70,
  	71,5,105,0,0,71,72,5,100,0,0,72,14,1,0,0,0,73,74,5,115,0,0,74,75,5,116,
  	0,0,75,76,5,114,0,0,76,77,5,105,0,0,77,78,5,110,0,0,78,79,5,103,0,0,79,
  	16,1,0,0,0,80,81,5,59,0,0,81,18,1,0,0,0,82,83,5,61,0,0,83,20,1,0,0,0,
  	84,85,5,112,0,0,85,86,5,114,0,0,86,87,5,105,0,0,87,88,5,110,0,0,88,89,
  	5,116,0,0,89,22,1,0,0,0,90,91,5,40,0,0,91,24,1,0,0,0,92,93,5,41,0,0,93,
  	26,1,0,0,0,94,95,5,105,0,0,95,96,5,102,0,0,96,28,1,0,0,0,97,98,5,101,
  	0,0,98,99,5,108,0,0,99,100,5,115,0,0,100,101,5,101,0,0,101,30,1,0,0,0,
  	102,104,7,0,0,0,103,102,1,0,0,0,104,105,1,0,0,0,105,103,1,0,0,0,105,106,
  	1,0,0,0,106,32,1,0,0,0,107,108,7,1,0,0,108,109,1,0,0,0,109,110,6,16,0,
  	0,110,34,1,0,0,0,111,113,7,2,0,0,112,111,1,0,0,0,113,114,1,0,0,0,114,
  	112,1,0,0,0,114,115,1,0,0,0,115,36,1,0,0,0,116,118,7,3,0,0,117,119,7,
  	4,0,0,118,117,1,0,0,0,119,120,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,
  	121,124,1,0,0,0,122,124,7,4,0,0,123,116,1,0,0,0,123,122,1,0,0,0,124,38,
  	1,0,0,0,125,126,8,5,0,0,126,40,1,0,0,0,127,131,5,34,0,0,128,130,3,39,
  	19,0,129,128,1,0,0,0,130,133,1,0,0,0,131,129,1,0,0,0,131,132,1,0,0,0,
  	132,134,1,0,0,0,133,131,1,0,0,0,134,135,5,34,0,0,135,42,1,0,0,0,136,137,
  	7,6,0,0,137,44,1,0,0,0,138,147,7,7,0,0,139,140,5,61,0,0,140,147,5,61,
  	0,0,141,142,5,38,0,0,142,147,5,38,0,0,143,144,5,124,0,0,144,147,5,124,
  	0,0,145,147,5,94,0,0,146,138,1,0,0,0,146,139,1,0,0,0,146,141,1,0,0,0,
  	146,143,1,0,0,0,146,145,1,0,0,0,147,46,1,0,0,0,7,0,105,114,120,123,131,
  	146,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  grammarlexerLexerStaticData = staticData.release();
}

}

GrammarLexer::GrammarLexer(CharStream *input) : Lexer(input) {
  GrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *grammarlexerLexerStaticData->atn, grammarlexerLexerStaticData->decisionToDFA, grammarlexerLexerStaticData->sharedContextCache);
}

GrammarLexer::~GrammarLexer() {
  delete _interpreter;
}

std::string GrammarLexer::getGrammarFileName() const {
  return "Grammar.g4";
}

const std::vector<std::string>& GrammarLexer::getRuleNames() const {
  return grammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& GrammarLexer::getChannelNames() const {
  return grammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& GrammarLexer::getModeNames() const {
  return grammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& GrammarLexer::getVocabulary() const {
  return grammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GrammarLexer::getSerializedATN() const {
  return grammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& GrammarLexer::getATN() const {
  return *grammarlexerLexerStaticData->atn;
}




void GrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  grammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(grammarlexerLexerOnceFlag, grammarlexerLexerInitialize);
#endif
}
