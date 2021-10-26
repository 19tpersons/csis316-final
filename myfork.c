#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"


int main(int argc, char *argv[]) {
  int k, n, id;
  double x = 0, z;
  double d = 1;

  if (argc < 2) {
    n = 1; //defualt
  } else { 
    n = atoi(argv[1]); //from command line
  }
    
  if (n < 0  || n > 50) {
    n = 2;
  }

  x = 0;
  id = 0;

  for (k = 0; i < n; k++) {
    id = fork();

    if (id < 0 ) {
      printf (1, "%d failed in fork!\n", getpid());
    } else if (id == 0) { //child
      printf(1, "Child %d created\n", getpid());
    } else { //parent
      printf(1, "Parent %d creating child %d", getpid(), id);
      wait();
    }
  }
}