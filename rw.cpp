#include "rw.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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
std::vector<std::vector<std::string>> RW::readFileTokenize(std::string path)
{
  std::ifstream in(path);
  std::string s;
  std::vector<std::vector<std::string>> sss;
  if(in.is_open())
  {
    in.seekg(0, std::ios::end);
    int size = in.tellg();
    s.resize(size);
    in.seekg(0, std::ios::beg);
    in.read(&s[0], size);
  } else {
    std::cout << "no file\n";
    return sss;
  }
  std::vector<std::string> *ss = new std::vector<std::string>;
  std::string *token = new std::string("");
  for(std::string::iterator it = s.begin(); it != s.end(); it++)
  {
    if(*it == ' ')
    {
      ss->push_back(*token);
      token = new std::string("");
    }
    else if(*it == '\n')
    {
      ss->push_back(*token);
      token = new std::string("");
      sss.push_back(*ss);
      ss = new std::vector<std::string>;
    }
    else
    {
      token->push_back(*it);
    }
  }
  return sss;
}
std::string split(std::string& tokens)
{
  std::string s = "";
  return s;
}

