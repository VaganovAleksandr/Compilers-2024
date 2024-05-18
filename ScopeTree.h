#include <unordered_map>
#include <utility>
#include <vector>

#include "Driver.h"

std::unordered_map<std::string, size_t> sizes_of_base_types = {
    {"int", sizeof(int)},
    {"bool", sizeof(bool)},
};

size_t get_size_of_variable(const std::any& var) {
  std::string type_name = typeid(var).name();
  if (type_name == "std::string") {
    return std::any_cast<std::string>(var).capacity() * sizeof(char) + 1;
  }
  auto it = sizes_of_base_types.find(type_name);
  if (it != sizes_of_base_types.end()) {
    return it->second;
  }
  return -1;
}

struct Symbol {
  std::string type;
  std::string base_type;
  std::string name;
  std::string name_in_llvm;
  std::any value;

  Symbol() = delete;
  Symbol(std::string type, std::string base_type, std::string name,
         std::string name_in_llvm)
      : type(std::move(type)),
        base_type(std::move(base_type)),
        name(std::move(name)),
        name_in_llvm(std::move(name_in_llvm)) {}
  Symbol(std::string type, std::string base_type, std::string name,
         std::string name_in_llvm, std::any value)
      : type(std::move(type)),
        base_type(std::move(base_type)),
        name(std::move(name)),
        name_in_llvm(std::move(name_in_llvm)),
        value(std::move(value)) {}

  bool operator==(const Symbol& other) const { return name == other.name; }
  bool operator!=(const Symbol& other) const { return name != other.name; }
};

class ScopeLayer {
 private:
  std::vector<ScopeLayer*> child_scopes = {};
  ScopeLayer* parent;

 public:
  ScopeLayer() = delete;
  explicit ScopeLayer(ScopeLayer* parent) : parent(parent) {}
  ~ScopeLayer();
  void add_to_child_scope_tree(ScopeLayer* layer);
  void delete_child_scope_tree(ScopeLayer* layer);
};