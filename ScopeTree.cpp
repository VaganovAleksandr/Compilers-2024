#include "ScopeTree.h"

ScopeLayer::~ScopeLayer() {
  for (ScopeLayer* child : child_scopes) {
    delete child;
  }
  delete symbol_table;
}

void ScopeTree::AddLayer() {
  auto* new_layer = new ScopeLayer(current_layer);
  current_layer->child_scopes.push_back(new_layer);
  current_layer = new_layer;
}

void ScopeTree::DeleteLayer() {
  auto old_layer = current_layer;
  current_layer = current_layer->parent;
  delete old_layer;
}

ScopeLayer* ScopeTree::GetCurrentLayer() {
  return current_layer;
}

SymbolBase* ScopeTree::GetSymbol(const std::string& name) {
  ScopeLayer* cur_layer = current_layer;
  while (cur_layer != nullptr) {
    if (!cur_layer->symbol_table->FindSymbol(name)) {
      cur_layer = cur_layer->parent;
      continue;
    }
    return cur_layer->symbol_table->GetSymbol(name);
  }
  throw std::runtime_error(name +  ": variable not declared");
}