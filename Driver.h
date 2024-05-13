#ifndef Driver_H
#define Driver_H

#include <any>
#include <map>
#include <string>
#include <memory>

class Driver {
 public:
  std::map<std::string, int> variables_int = {};
  std::map<std::string, bool> variables_bool = {};
  std::map<std::string, std::string> variables_string = {};
  // TODO: Default constructors support
  void AddVariable(const std::string& type, const std::string& name,
                   const std::any& value);
  void ChangeVariable(const std::string& name, const std::any& new_value);
  [[nodiscard]] std::any GetVariable(const std::string& name) const;
  void Clear();
};

#endif