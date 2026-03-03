#include <algorithm>
#include <chrono> // For std::steady_clock
#include <memory> // For smart pointers
#include <print>
#include <vector>

constexpr size_t N = 10000000;

template <typename PTR_T, typename MAKE_FUN_T>
void TestPointers(std::string name, MAKE_FUN_T make_fun) {
  using clock = std::chrono::steady_clock;

  auto start = clock::now();

  std::vector<PTR_T> ptr_vec(N);
  for (size_t i = 0; i < N; ++i) ptr_vec[i] = std::move(make_fun((i*7)%N));

  // Try sorting!
  std::sort( ptr_vec.begin(), ptr_vec.end(), 
    [](PTR_T & p1, PTR_T & p2) { return *p1 < *p2; } );

  if constexpr (std::same_as<PTR_T, int *>) {
    for (auto ptr : ptr_vec) delete ptr;
  }
  ptr_vec.resize(0);

  auto ms = std::chrono::duration<double, std::milli>(clock::now() - start).count();
  std::println("{:>8} time = {:>8.3f} ms", name, ms);
}

int main()
{
  TestPointers<int *>("Raw", [](int x){ return new int{x}; });
  TestPointers<std::shared_ptr<int>>("Shared", [](int x){ return std::make_shared<int>(x); });
  TestPointers<std::unique_ptr<int>>("Unique", [](int x){ return std::make_unique<int>(x); });
}