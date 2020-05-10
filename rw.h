#ifndef RW_H 
#define RW_H

#include <string>
#include <vector>

class RW
{
public:
  RW();
  static std::string readFile(std::string path);
  static std::vector<std::vector<std::string>> readFileTokenize(std::string path);
  static std::string split(std::string& tokens);
};
#endif

