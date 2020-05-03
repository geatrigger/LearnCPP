#include "rw.h"
#include <iostream>
#include <fstream>
#include <string>

RW::RW()
{
  std::cout << "RW initialize\n";
}
std::string RW::readFile(std::string path)
{
  std::ifstream in(path);
  std::string s = "";
  if(in.is_open())
  {
    in.seekg(0, std::ios::end);
    int size = in.tellg();
    s.resize(size);
    in.seekg(0, std::ios::beg);
    in.read(&s[0], size);
  } else {
    std::cout << "no file\n";
  }
  return s;
}
std::string split(std::string& tokens)
{
  std::string s = "";
  return s;
}

