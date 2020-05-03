#include "foo.h"
#include <iostream>
#include <iterator>
#include <string>
#include <regex>

Foo::Foo()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  print();
  // useString();
  useRegex();
  std::cout << "\n";
}

void Foo::print()
{
  std::cout << "start\n";
}

void Foo::useString()
{
  std::string str1;
  str1.reserve(13); // 15, 30, 집어넣은 숫자
  str1 = "BlockDMask";
  std::string str2;
  str2 = "BlogBlogBlogBlog";

  std::cout << str1.at(0);
  std::cout << str1[1]; // str1.operator[1]
  std::cout << str1.front();
  std::cout << str1.back();

  std::cout << "\n";
  std::cout << str1.size(); //std::cout << str1.length();
  std::cout << str1.capacity();
  str1.assign("Very huuuuuuuuuuuuuuuge string");
  str1.assign("BlockDMask");
  std::cout << "\n";
  std::cout << str1.size();
  std::cout << str1.capacity();
  str1.assign("ㄱㄴㄷ");
  std::cout << "\n";
  std::cout << str1.size();
  std::cout << str1.capacity();
  str1.resize(6);
  std::cout << "\n";
  std::cout << str1;
  std::cout << str1.size();
  std::cout << str1.capacity();
  str1.clear();
  std::cout << "\n";
  std::cout << str1;
  std::cout << "\n";
  std::cout << str1.empty();
  str1.assign("BlockDMask");
  std::cout << "\n";
  std::cout << str1.substr(5, 1); // return new string
  std::cout << "\n";
  std::cout << str1.replace(5, 2, str2); // change original string
  std::cout << "\n";
  std::cout << str1;
  std::cout << "\n";
  std::cout << str2.find("Blog", 5); // return first word's first index, find "Blog" from 5th index

  str1.assign("BlockDMask");
  std::cout << "\n";
  for (std::string::iterator iter = str1.begin(); iter != str1.end(); iter++)
  {
    std::cout << *iter << "\n";
  }
  std::swap(str1, str2);
  std::cout << "\n";
  std::cout << str1;
  std::cout << "\n";
  std::cout << str2;
  std::cout << "\n";
  std::cout << str2.compare(str1);
}

void Foo::useRegex()
{
  std::string s = "aab aaa pap ppa ppap apaa";
  std::regex self_regex("aa+",
    std::regex_constants::ECMAScript | std::regex_constants::icase);
  
  auto words_begin = std::sregex_iterator(s.begin(), s.end(), self_regex);
  auto words_end = std::sregex_iterator();

  std::cout << "Found "
    << std::distance(words_begin, words_end)
    << " words\n";
  for(std::sregex_iterator i = words_begin; i != words_end; i++)
  {
    std::cout << typeid(i).name() << "\n";
    std::smatch match = *i;
    std::cout << match.str() << "\n";
  }
}
