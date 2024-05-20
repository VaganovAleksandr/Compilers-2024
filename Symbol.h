#include <any>
#include <string>

#include "llvm_headers.h"

struct SymbolBase {
  std::string name;
  llvm::Value* allocated_memory = nullptr;

  SymbolBase() = default;
  virtual ~SymbolBase() = default;
  SymbolBase(std::string name, llvm::Value* allocated_memory);

  bool operator==(const SymbolBase& other) const;
  bool operator!=(const SymbolBase& other) const;
};

struct SymbolVariable : SymbolBase {
  SymbolVariable(std::string base_type, const std::string& name, std::any value,
                 llvm::Value* allocated_memory);
  SymbolVariable(std::string base_type, const std::string& name,
                 llvm::Value* allocated_memory);
  ~SymbolVariable() override = default;
  std::string base_type;
  std::any value;
};

struct SymbolFunction : SymbolBase {
  SymbolFunction(std::string return_type, std::vector<SymbolVariable*> args,
                 llvm::Function* function, const std::string& name,
                 llvm::Value* allocated_memory);
  ~SymbolFunction() override = default;
  std::string return_type;
  std::vector<SymbolVariable*> arguments;
  llvm::Function* function;
};

struct SymbolClass : SymbolBase {
  SymbolClass(std::vector<SymbolVariable*> fields,
              std::vector<SymbolFunction*> methods, const std::string& name,
              llvm::Value* allocated_memory);
  ~SymbolClass() override = default;
  std::vector<SymbolVariable*> fields;
  std::vector<SymbolFunction*> methods;
};