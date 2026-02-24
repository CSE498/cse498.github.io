#include <iostream>

auto sum(auto... args) {
  return (... + args);
}

auto old_sum(auto arg) { return arg; }

auto old_sum(auto arg1, auto... args) {
  return arg1 + old_sum(args...);
}

// We want diff(x,y,z) to give us x - y - z;
auto diff(auto... args) {
  return (... - args);
}

// We want a Print command that will print ALL arguments in order.
void Print(auto... args) {
  ((std::cout << args), ...);
  std::cout << std::endl;  
}

int main()
{
  std::cout << sum(1, 2.7, 3, 4.2, 6) << std::endl;
  std::cout << sum(1, 2.7, 3, 4.2, 6) << std::endl;


  std::cout << old_sum(1, 2, 3.7, 4.2, 6) << std::endl;

  std::cout << sum<int>(2.7) << std::endl;

  std::cout << "Diff: " << diff(50, 3, 2) << std::endl;

  int var = 5;
  Print("This is a test.", " var = ", var, " (which should be 5).");
}