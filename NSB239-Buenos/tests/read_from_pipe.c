#include "tests/lib.h"

static const char prog[] = "[hd]pipe_test";

int main(void)
{
  uint32_t child = child;

  int ret = ret;
  
  child = syscall_exec(prog, 1);

  ret = (char)syscall_join(child);

  int open = syscall_open("[pipe]pipe5");
  int read;

  char buf[50] = "Hejsa";

  printf("Before: %s\n", buf);

  read = syscall_read(open, buf, 12);

  printf("read bytes: %d\n", read);

  printf("After: %s\n", buf); 

  syscall_halt();
  return 0;
}
