#ifndef RW_H 
#define RW_H

#include <string>

class RW
{
public:
  RW();
  static std::string readFile(std::string path);
  static std::string split(std::string& tokens);
};
#endif

