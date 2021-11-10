#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
  if (argc == 1) {
    hello("(null)");
  } else {
    hello(argv[1]);
  }
  exit();
}
