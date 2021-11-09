#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
  if (argc == 0) {
    hello("( null )");
  } else {
    hello(argv[0]);
  }

  return 0;
}
