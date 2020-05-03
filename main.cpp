#include "rw.h"
#include "foo.h"
#include <string>
#include <iostream>

int main()
{
  // Foo* obj = new Foo();
  std::string s = RW::readFile("README.md");
  std::cout << s;
}
