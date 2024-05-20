#include <any>
#include <string>

#include "llvm_headers.h"

struct Symbol {
  std::string type;
  std::string base_type;
  std::string name;
  std::any value = 0;
  llvm::Value* allocated_memory;

  Symbol() = delete;
  Symbol(std::string type, std::string base_type, std::string name,
         llvm::Value* allocated_memory);
  Symbol(std::string type, std::string base_type, std::string name,
         std::any value, llvm::Value* allocated_memory);

  bool operator==(const Symbol& other) const;
  bool operator!=(const Symbol& other) const;
};