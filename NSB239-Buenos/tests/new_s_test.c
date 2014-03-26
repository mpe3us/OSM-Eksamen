#include "tests/lib.h"

/* Programs to be executes */
static const char prog1[] = "[hd]schedule_1"; /* Highest priority */
static const char prog2[] = "[hd]schedule_2"; /* Second-highest priority */
static const char prog3[] = "[hd]schedule_3"; /* Third-highest priority */
static const char prog4[] = "[hd]schedule_4"; /* Low priority */

int main(void)
{
  uint32_t child1 = child1;
  uint32_t child2 = child2;
  uint32_t child3 = child3;
  uint32_t child4 = child4;
  
  int ret1 = ret1;
  int ret2 = ret2;
  int ret3 = ret3;
  int ret4 = ret4;

  printf("Starting program %s\n", prog3);
  child1 = syscall_exec(prog3, 1000); /* Third-highest priority */

  printf("Starting program %s\n", prog1);
  child2 = syscall_exec(prog1, 1);  /* Highest priority */

  printf("Starting program %s\n", prog4);
  child3 = syscall_exec(prog4, 10000);    /* Low priority */

  printf("Starting program %s\n", prog2);
  child4 = syscall_exec(prog2, 100);  /* Second-highest priority */

  printf("Now joining child %d\n", child1);
  ret1 = (char)syscall_join(child1);
  printf("Child1 joined with status: %d\n", ret1);

  printf("Now joining child %d\n", child2);
  ret2 = (char)syscall_join(child2);
  printf("Child2 joined with status: %d\n", ret2);

  printf("Now joining child %d\n", child3);
  ret3 = (char)syscall_join(child3);
  printf("Child3 joined with status: %d\n", ret3);

  printf("Now joining child %d\n", child4);
  ret4 = (char)syscall_join(child4);
  printf("Child4 joined with status: %d\n", ret4);
  

  syscall_halt();
  return 0;
}

