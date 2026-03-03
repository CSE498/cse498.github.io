// Compile with: em++ Example-4.cpp --std=c++23 -o Example-4.html

#include <emscripten.h>
#include <print>

void Alert(const std::string & msg) {
  EM_ASM({
    var msg = UTF8ToString($0);
    alert(msg);
  }, msg.c_str());
}

int main() {
  Alert("Did my alert work??");
}