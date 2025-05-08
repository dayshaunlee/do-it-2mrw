#include <string>
#include "../include/test.h"

namespace test {
  std::string hello_world(const std::string& input) {
    // Simply concatenate strings and return
    return "Hello from C++! You said: " + input;
  }
} // namespace test
