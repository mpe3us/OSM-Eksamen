#include "tests/lib.h"

/* Programs to be executes */
static const char prog1[] = "[a]schedule_1"; /* Highest priority */
static const char prog2[] = "[a]schedule_2"; /* Second-highest priority */
static const char prog3[] = "[a]schedule_3"; /* Third-highest priority */
static const char prog4[] = "[a]schedule_4"; /* Low priority */

int main(void)
{
  uint32_t child1;
  uint32_t child2;
  uint32_t child3;
  uint32_t child4;
  
  int ret1;
  int ret2;
  int ret3;
  int ret4;

  printf("Starting program %s\n", prog3);
  child1 = syscall_exec(prog3, 5000); /* Third-highest priority */
  printf("Now joining child %d\n", child1);
  ret1 = (char)syscall_join(child1);
  printf("Child1 joined with status: %d\n", ret1);

  printf("Starting program %s\n", prog1);
  child2 = syscall_exec(prog1, 2000); /* Highest priority */
  printf("Now joining child %d\n", child2);
  ret2 = (char)syscall_join(child2);
  printf("Child2 joined with status: %d\n", ret2);

  printf("Starting program %s\n", prog2);
  child3 = syscall_exec(prog2, 3500); /* Second-highest priority */
  printf("Now joining child %d\n", child3);
  ret3 = (char)syscall_join(child3);
  printf("Child3 joined with status: %d\n", ret3);

  printf("Starting program %s\n", prog4);
  child4 = syscall_exec(prog4, 0);    /* Low priority */
  printf("Now joining child %d\n", child4);
  ret4 = (char)syscall_join(child4);
  printf("Child4 joined with status: %d\n", ret4);
  
  syscall_halt();
  return 0;
}

