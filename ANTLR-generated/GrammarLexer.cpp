
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
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "NEWLINE", "SPACE", "VARIABLE_NAME", "INTEGER", 
      "SCHAR", "STRING", "UNARY_OPERATOR", "BINARY_OPERATOR"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,28,180,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,
  	1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,
  	5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,
  	1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,13,1,13,1,13,
  	1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,17,1,17,
  	1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,20,4,20,
  	136,8,20,11,20,12,20,137,1,21,1,21,1,21,1,21,1,22,4,22,145,8,22,11,22,
  	12,22,146,1,23,1,23,4,23,151,8,23,11,23,12,23,152,1,23,3,23,156,8,23,
  	1,24,1,24,1,25,1,25,5,25,162,8,25,10,25,12,25,165,9,25,1,25,1,25,1,26,
  	1,26,1,27,1,27,1,27,1,27,1,27,1,27,1,27,1,27,3,27,179,8,27,0,0,28,1,1,
  	3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,29,
  	15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,26,
  	53,27,55,28,1,0,8,2,0,10,10,13,13,2,0,9,9,32,32,2,0,65,90,97,122,1,0,
  	49,57,1,0,48,57,9,0,10,10,13,13,34,34,38,38,42,43,45,45,47,47,92,92,94,
  	94,3,0,38,38,42,42,45,45,3,0,42,43,45,45,47,47,188,0,1,1,0,0,0,0,3,1,
  	0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,
  	15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,
  	0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,
  	0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,
  	47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,1,57,1,
  	0,0,0,3,61,1,0,0,0,5,66,1,0,0,0,7,69,1,0,0,0,9,71,1,0,0,0,11,73,1,0,0,
  	0,13,78,1,0,0,0,15,83,1,0,0,0,17,90,1,0,0,0,19,95,1,0,0,0,21,97,1,0,0,
  	0,23,99,1,0,0,0,25,101,1,0,0,0,27,103,1,0,0,0,29,110,1,0,0,0,31,112,1,
  	0,0,0,33,118,1,0,0,0,35,120,1,0,0,0,37,126,1,0,0,0,39,129,1,0,0,0,41,
  	135,1,0,0,0,43,139,1,0,0,0,45,144,1,0,0,0,47,155,1,0,0,0,49,157,1,0,0,
  	0,51,159,1,0,0,0,53,168,1,0,0,0,55,178,1,0,0,0,57,58,5,105,0,0,58,59,
  	5,110,0,0,59,60,5,116,0,0,60,2,1,0,0,0,61,62,5,109,0,0,62,63,5,97,0,0,
  	63,64,5,105,0,0,64,65,5,110,0,0,65,4,1,0,0,0,66,67,5,40,0,0,67,68,5,41,
  	0,0,68,6,1,0,0,0,69,70,5,123,0,0,70,8,1,0,0,0,71,72,5,125,0,0,72,10,1,
  	0,0,0,73,74,5,98,0,0,74,75,5,111,0,0,75,76,5,111,0,0,76,77,5,108,0,0,
  	77,12,1,0,0,0,78,79,5,118,0,0,79,80,5,111,0,0,80,81,5,105,0,0,81,82,5,
  	100,0,0,82,14,1,0,0,0,83,84,5,115,0,0,84,85,5,116,0,0,85,86,5,114,0,0,
  	86,87,5,105,0,0,87,88,5,110,0,0,88,89,5,103,0,0,89,16,1,0,0,0,90,91,5,
  	102,0,0,91,92,5,117,0,0,92,93,5,110,0,0,93,94,5,99,0,0,94,18,1,0,0,0,
  	95,96,5,40,0,0,96,20,1,0,0,0,97,98,5,41,0,0,98,22,1,0,0,0,99,100,5,42,
  	0,0,100,24,1,0,0,0,101,102,5,44,0,0,102,26,1,0,0,0,103,104,5,109,0,0,
  	104,105,5,101,0,0,105,106,5,116,0,0,106,107,5,104,0,0,107,108,5,111,0,
  	0,108,109,5,100,0,0,109,28,1,0,0,0,110,111,5,59,0,0,111,30,1,0,0,0,112,
  	113,5,99,0,0,113,114,5,108,0,0,114,115,5,97,0,0,115,116,5,115,0,0,116,
  	117,5,115,0,0,117,32,1,0,0,0,118,119,5,61,0,0,119,34,1,0,0,0,120,121,
  	5,112,0,0,121,122,5,114,0,0,122,123,5,105,0,0,123,124,5,110,0,0,124,125,
  	5,116,0,0,125,36,1,0,0,0,126,127,5,105,0,0,127,128,5,102,0,0,128,38,1,
  	0,0,0,129,130,5,101,0,0,130,131,5,108,0,0,131,132,5,115,0,0,132,133,5,
  	101,0,0,133,40,1,0,0,0,134,136,7,0,0,0,135,134,1,0,0,0,136,137,1,0,0,
  	0,137,135,1,0,0,0,137,138,1,0,0,0,138,42,1,0,0,0,139,140,7,1,0,0,140,
  	141,1,0,0,0,141,142,6,21,0,0,142,44,1,0,0,0,143,145,7,2,0,0,144,143,1,
  	0,0,0,145,146,1,0,0,0,146,144,1,0,0,0,146,147,1,0,0,0,147,46,1,0,0,0,
  	148,150,7,3,0,0,149,151,7,4,0,0,150,149,1,0,0,0,151,152,1,0,0,0,152,150,
  	1,0,0,0,152,153,1,0,0,0,153,156,1,0,0,0,154,156,7,4,0,0,155,148,1,0,0,
  	0,155,154,1,0,0,0,156,48,1,0,0,0,157,158,8,5,0,0,158,50,1,0,0,0,159,163,
  	5,34,0,0,160,162,3,49,24,0,161,160,1,0,0,0,162,165,1,0,0,0,163,161,1,
  	0,0,0,163,164,1,0,0,0,164,166,1,0,0,0,165,163,1,0,0,0,166,167,5,34,0,
  	0,167,52,1,0,0,0,168,169,7,6,0,0,169,54,1,0,0,0,170,179,7,7,0,0,171,172,
  	5,61,0,0,172,179,5,61,0,0,173,174,5,38,0,0,174,179,5,38,0,0,175,176,5,
  	124,0,0,176,179,5,124,0,0,177,179,5,94,0,0,178,170,1,0,0,0,178,171,1,
  	0,0,0,178,173,1,0,0,0,178,175,1,0,0,0,178,177,1,0,0,0,179,56,1,0,0,0,
  	7,0,137,146,152,155,163,178,1,6,0,0
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
