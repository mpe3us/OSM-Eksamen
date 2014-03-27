#include "tests/lib.h"

int main(void)
{
  int clock1 = syscall_getclock();
  printf("Number of milliseconds since startup: %d\n", clock1);
  int clock2 = syscall_getclock();
  printf("Number of milliseconds since startup: %d\n", clock2);
  syscall_halt();
  return 0;
}

