#include <print>

#include "AuditedVector.hpp"

int main()
{
  cse498::AuditedVector<int> av;
  
  av.resize(10);
  for (size_t i = 0; i < av.size(); ++i) {
    av[i] = i;
  }

  std::println("Value 3 = {}", av[3]);

  [[maybe_unused]] int x = 7;

  std::cout << av.front() << std::endl;
  std::cout << av.back() << std::endl;

}