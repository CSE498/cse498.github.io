// To compile on non-Mac:
//   g++ -std=c++23 sort.cpp -O3
//
// To compile on Mac, first install tbb.  If you use Homebrew to do so, compile with:
//   g++ -std=c++23 sort.cpp -O3 -ltbb -L/opt/homebrew/lib -I/opt/homebrew/include
//
// The Threading Building Blocks (tbb) library is generally recommended.  More info here:
// https://en.wikipedia.org/wiki/Threading_Building_Blocks

#include <algorithm>
#include <execution>
#include <print>
#include <vector>

#include "../Timer/Timer.hpp"

int main()
{
  constexpr size_t N = 10'000'000;
  constexpr size_t prime = 101;

  std::vector<size_t> values(N);
  for (size_t i = 0; i < N; ++i) values[i] = (i*prime) % N;
  const auto unsorted = values;

  for (size_t i = 0; i < 20; ++i) {
    std::print("{} ", values[i]);
  }
  std::println("");
 
  Timer timer("seq sort");
  std::sort(std::execution::seq, values.begin(), values.end());
  timer.Stop();

  values = unsorted;

  Timer ptimer("par sort");
  std::sort(std::execution::par, values.begin(), values.end());
  ptimer.Stop();

  values = unsorted;

  Timer utimer("unseq sort");
  std::sort(std::execution::unseq, values.begin(), values.end());
  utimer.Stop();

  values = unsorted;

  Timer putimer("par_unseq sort");
  std::sort(std::execution::par_unseq, values.begin(), values.end());
  putimer.Stop();

  for (size_t i = 0; i < 20; ++i) {
    std::print("{} ", values[i]);
  }
  std::println("");
}