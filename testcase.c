#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
  for (int i = 0; i < 5; i++) {
    shello("CSIS 430's Xv6 Lab Session");
    shello("Calling hello() with arguments.\n");
  }

  exit();
}
