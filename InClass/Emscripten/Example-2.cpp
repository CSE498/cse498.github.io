// Compile with: em++ Example-2.cpp --std=c++23 -o Example-2.html

#include <emscripten.h>

int main()
{
  EM_ASM({
    alert('Hello from C++!');
  });
}