#ifndef Driver_H
#define Driver_H

#include <map>

class Driver {
 public:
  std::map<std::string, int> variables_int = {};
  std::map<std::string, bool> variables_bool = {};
  //TODO: Default constructors support
  void AddVariable(const std::string& type, const std::string& name, int value);
  void ChangeVariable(const std::string& name, int new_value);
  [[nodiscard]] int GetVariable(const std::string& name) const;
  void Clear();
};

#endif