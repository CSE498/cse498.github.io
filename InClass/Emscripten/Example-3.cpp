// Compile with: em++ Example-3.cpp --std=c++23 -o Example-3.html

#include <emscripten.h>
#include <print>

EM_JS(int, JSTimesTwo, (int value), {
  alert('Doubling: ' + value);
  return value*2; // Double the input value
});

int main() {
  int val = 21;
  int result = JSTimesTwo(val);
  std::println("result = {}", result);

}