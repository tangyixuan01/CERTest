#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

static struct S
{
  int *p1;
  int *p2;
} s;
int foo()
{
  char rXicunb8 = (signed char)101;
  int i = 1;
  int j = 2;
  struct S s;
  int **p;
  s.p1 = &i;
  s.p2 = &j;
  p = &s.p1;
  uintptr_t pi = (uintptr_t) p;
  pi = pi + (sizeof(int *));
  rXicunb8 = -21;
  p = (int **) pi;
  *(*p) = 3;
  transparent_crc(rXicunb8, "rXicunb8", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return j;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  if (foo() != 3)
  {
    __builtin_abort();
  }
  return 0;
}

