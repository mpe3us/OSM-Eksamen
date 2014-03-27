#include "tests/lib.h"

int main(void)
{
  int ret1, ret2, ret3, ret4, ret5, ret6, ret7, ret8, ret9, ret10;

  ret1 = syscall_create("[pipe]pipe1", 0);
  ret2 = syscall_create("[pipe]pipe2", 0);
  ret3 = syscall_create("[pipe]pipe3", 0);
  ret4 = syscall_create("[pipe]pipe4", 0);
  ret5 = syscall_create("[pipe]pipe5", 0);
  ret6 = syscall_create("[pipe]pipe6", 0);
  ret7 = syscall_create("[pipe]pipe7", 0);
  ret8 = syscall_create("[pipe]pipe8", 0);
  ret9 = syscall_create("[pipe]pipe9", 0);
  ret10 = syscall_create("[pipe]pipe10", 0);

  printf("ret1: %d\n", ret1);
  printf("ret2: %d\n", ret2);
  printf("ret3: %d\n", ret3);
  printf("ret4: %d\n", ret4);
  printf("ret5: %d\n", ret5);
  printf("ret6: %d\n", ret6);
  printf("ret7: %d\n", ret7);
  printf("ret8: %d\n", ret8);
  printf("ret9: %d\n", ret9);
  printf("ret10: %d\n", ret10);

  syscall_halt();
  return 0;
}
