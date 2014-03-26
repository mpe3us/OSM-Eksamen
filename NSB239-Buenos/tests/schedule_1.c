#include "tests/lib.h"

int main(void)
{
  int i;
  for(i=0; i<999999; i++)
  {
    //printf("1 runs\n");
    //Does nothing
  }
  printf("I have FIRST priority!\n");
  syscall_exit(0);
  return 0;
}
