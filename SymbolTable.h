#include <unordered_map>
#include <stack>

#include "Symbol.h"

class SymbolTable {
 public:
  SymbolTable() = default;
  void ChangeSymbol(SymbolBase* symbol);
  void CreateSymbol(SymbolBase* symbol);
  bool FindSymbol(const std::string& name);
  SymbolBase* GetSymbol(const std::string& name);

  void BeginScope();
  void EndScope();

 private:
  std::unordered_map<std::string, std::stack<SymbolBase*>> symbols = {};
  std::stack<SymbolBase> symbol_stream = {};

  SymbolBase scope_beginner_ = SymbolBase("{", nullptr);
};