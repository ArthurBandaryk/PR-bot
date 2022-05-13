#include <iostream>

#include "result.h"

int main(int argc, char **argv) {
  std::cout << result(100) << std::endl;
  return std::cout.good() ? EXIT_SUCCESS : EXIT_FAILURE;
}
