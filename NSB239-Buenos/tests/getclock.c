#include "tests/lib.h"

int main(void)
{
  int clock = syscall_getclock();
  printf("Number of milliseconds since startup: %d\n", clock);
  return 0;
}

