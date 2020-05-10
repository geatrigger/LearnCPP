#include "rw.h"
#include "foo.h"
#include <string>
#include <iostream>
#include <vector>

int main()
{
  // Foo* obj = new Foo();
  // std::string s = RW::readFile("README.md");
  std::vector<std::vector<std::string>> s = RW::readFileTokenize("README.md");
  RW::printTokens(s);
}
