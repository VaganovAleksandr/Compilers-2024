#include "ScopeTree.h"

ScopeLayer::~ScopeLayer() {
  for (ScopeLayer* child : child_scopes) {
    delete child;
  }
  delete this;
}

void ScopeLayer::add_to_child_scope_tree(ScopeLayer* layer) {
  child_scopes.push_back(layer);
  layer->parent = this;
}

void ScopeLayer::delete_child_scope_tree(ScopeLayer* layer) {
  for (auto it = child_scopes.begin(); it < child_scopes.end(); ++it) {
    if (*it == layer) {
      child_scopes.erase(it);
      break;
    }
  }
  delete layer;
}