#include "GrammarLexer.h"
#include "GrammarParser.h"
#include "Interpreter.h"
#include "antlr4-runtime.h"

int main(int argc, char** argv) {
  auto path = argv[1];
  std::ifstream file(path);
  std::string inputString((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
  auto stream = antlr4::ANTLRInputStream(inputString);
  GrammarLexer lexer(&stream);
  antlr4::CommonTokenStream tokens(&lexer);

  tokens.fill();

  GrammarParser parser(&tokens);
  auto* tree = parser.prog();

  if (parser.getNumberOfSyntaxErrors() || lexer.getNumberOfSyntaxErrors()) {
    return EXIT_FAILURE;
  }

  Interpreter interpreter;

  Prog* prog = std::any_cast<Prog*>(interpreter.visit(tree));

  return 0;
}