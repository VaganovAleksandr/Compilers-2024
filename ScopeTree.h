#include <unordered_map>
#include <utility>
#include <vector>

#include "SymbolTable.h"

struct ScopeLayer {
  std::vector<ScopeLayer*> child_scopes = {};
  ScopeLayer* parent;
  ScopeLayer() = delete;
  explicit ScopeLayer(ScopeLayer* parent) : parent(parent) {}
  ~ScopeLayer();
  SymbolTable* symbol_table = new SymbolTable();
};

class ScopeTree {
 private:
  ScopeLayer* current_layer;

 public:
  ScopeTree() = delete;
  explicit ScopeTree(ScopeLayer* scope_layer): current_layer(scope_layer) {}
  ~ScopeTree() = default;
  void AddLayer();
  void DeleteLayer();
  ScopeLayer* GetCurrentLayer();
  SymbolBase* GetSymbol(const std::string& name);
};