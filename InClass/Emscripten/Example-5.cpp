// Compile with: em++ Example-5.cpp --std=c++23 -o Example-5.html -s EXPORTED_FUNCTIONS="['_SquareVal', '_main']" -s EXPORTED_RUNTIME_METHODS="['cwrap']"

#include <emscripten.h>

extern "C" {
  double SquareVal(double val) {
    return val*val;
  }
}

int main()
{
  EM_ASM({
    sq_val = Module.cwrap('SquareVal', 'number', ['number']);
    var x = 12.5;
    alert(`Computing ${x} * ${x} = ${sq_val(x)}`);
  });
}