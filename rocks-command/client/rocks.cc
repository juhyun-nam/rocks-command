#include <cstdio>     // for perror
#include <cstdlib>    // for exit, EXIT_FAILURE
#include <stdexcept>  // for exception

int main() {
  try {

  } catch (const std::exception& e) {
    std::perror(e.what());
    std::exit(EXIT_FAILURE);
  }
  return 0;
}
