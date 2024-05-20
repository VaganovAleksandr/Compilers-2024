#include <unordered_map>
#include <stack>

#include "Symbol.h"

class SymbolTable {
 public:
  SymbolTable() = default;
  void ChangeSymbol(Symbol* symbol);
  void CreateSymbol(Symbol* symbol);
  bool FindSymbol(const std::string& name);
  Symbol* GetSymbol(const std::string& name);

  void BeginScope();
  void EndScope();

 private:
  std::unordered_map<std::string, std::stack<Symbol*>> symbols = {};
  std::stack<Symbol> symbol_stream = {};

  Symbol scope_beginner_ = Symbol("", "", "{", nullptr, nullptr);
};