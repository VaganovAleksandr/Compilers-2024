#include "InterpreterTests.h"

extern std::unique_ptr<Driver> driver;

void BasicTest(const std::string& program) {
  auto stream = antlr4::ANTLRInputStream(program);
  GrammarLexer lexer(&stream);
  antlr4::CommonTokenStream tokens(&lexer);

  tokens.fill();
  GrammarParser parser(&tokens);

  auto* tree = parser.prog();
  Interpreter interpreter;
  ASSERT_NO_THROW(std::any_cast<Prog*>(interpreter.visit(tree)));
  driver->Clear();
}

int BaseChecker(const std::string& program) {
  std::stringstream buffer;
  std::streambuf* prevcoutbuf = std::cout.rdbuf(buffer.rdbuf());
  auto stream = antlr4::ANTLRInputStream(program);
  GrammarLexer lexer(&stream);
  antlr4::CommonTokenStream tokens(&lexer);

  tokens.fill();
  GrammarParser parser(&tokens);

  auto* tree = parser.prog();
  Interpreter interpreter;
  auto* prog = std::any_cast<Prog*>(interpreter.visit(tree));
  std::string text = buffer.str();
  int result = std::stoi(text);
  std::cout.rdbuf(prevcoutbuf);
  driver->Clear();
  return result;
}

TEST(InterpreterTests, EmptyTest) {
  BasicTest("int main() {}");
}

TEST(InterpreterTests, VariableDeclaration) {
  BasicTest("int main() { int x; }");
}

TEST(InterpreterTests, VariableDefinition) {
  BasicTest("int main() { int x; x = 5; }");
}

TEST(InterpreterTests, VariableDeclarationDefinition) {
  BasicTest("int main() { int x = 5; }");
}

TEST(InterpreterTests, NegativeIntegers) {
  BasicTest("int main() { int x = -1; }");
}

TEST(InterpreterTests, CheckAnswerDefault) {
  ASSERT_EQ(BaseChecker("int main() { int x; print(x); }"), 0);
}

TEST(InterpreterTests, CheckAnswerDefinition) {
  ASSERT_EQ(BaseChecker("int main() { int x = 7; print(x); }"), 7);
}

TEST(InterpreterTests, CheckAnswerDefinitionNegative) {
  ASSERT_EQ(BaseChecker("int main() { int x = -7; print(x); }"), -7);
}

TEST(InterpreterTests, CheckAnswerBinaryOperator) {
  ASSERT_EQ(BaseChecker("int main() { int x = 1; x = x + 2; print(x); }"), 3);
}

TEST(InterpreterTests, CheckAnswerIf) {
  ASSERT_EQ(BaseChecker("int main() { int x = 5; if (x == 5) { print(x); } }"), 5);
}

TEST(InterpreterTests, CheckAnswerIfElse) {
  ASSERT_EQ(BaseChecker("int main() { int x = 5; if (x == 3) { print(x); } else { x = 7; print(x); } }"), 7);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}