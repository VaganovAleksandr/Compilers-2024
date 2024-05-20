#include "SymbolTable.h"

void SymbolTable::ChangeSymbol(SymbolBase* symbol) {
  auto it = symbols.find(symbol->name);
  if (it == symbols.end()) {
    throw std::runtime_error(symbol->name +  ": variable not declared");
  }
  it->second.pop();
  it->second.push(symbol);
}

void SymbolTable::CreateSymbol(SymbolBase* symbol) {
  if (symbols.find(symbol->name) == symbols.end()) {
    symbols[symbol->name] = std::stack<SymbolBase*>();
  }
  symbols[symbol->name].push(symbol);
  symbol_stream.push(*symbol);
}

bool SymbolTable::FindSymbol(const std::string& name) {
  return symbols.find(name) != symbols.end();
}

SymbolBase* SymbolTable::GetSymbol(const std::string& name) {
  if (symbols.find(name) == symbols.end()) {
    throw std::runtime_error(name +  ": variable not declared");
  }
  return symbols[name].top();
}

void SymbolTable::BeginScope() {
  symbol_stream.push(scope_beginner_);
}

void SymbolTable::EndScope() {
  while(symbol_stream.top() != scope_beginner_) {
    SymbolBase symbol = symbol_stream.top();
    symbols[symbol.name].pop();
    if (symbols[symbol.name].empty()) {
      symbols.erase(symbol.name);
    }
    symbol_stream.pop();
  }
  symbol_stream.pop();
}