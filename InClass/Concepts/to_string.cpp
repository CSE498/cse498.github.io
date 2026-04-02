#include "to_string.hpp"

#include <format>
#include <print>
#include <string>

struct Coords {
  int x = 10;
  int y = 15;

  std::string ToString() const { return std::format("[{},{}]", x, y); }
};

int main()
{
  std::string str{"Hello"};
  int result = 120;

  std::println("concat: {}", cse498::to_string(str) + cse498::to_string(result));
  std::println("float: {}", cse498::to_string(1.23));

  std::println("lit string: {}", cse498::to_string("This is a literal"));
 
  Coords c;
  std::println("MyStruct: {}", cse498::to_string(c));

}
