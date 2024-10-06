#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-assignment-snippet

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
  int beBv7419 = -1456520049;
  int IgDxhLfC = 2147483647;
  char wrhZnQba = (signed char)109;
  char UVmPgyis = (signed char)-128;
  if (foo() != 3)
  {
    __builtin_abort();
    IgDxhLfC = beBv7419 < ((3 * (~wrhZnQba)) + UVmPgyis);
  }
  transparent_crc(UVmPgyis, "UVmPgyis", 1);
  transparent_crc(wrhZnQba, "wrhZnQba", 1);
  transparent_crc(IgDxhLfC, "IgDxhLfC", 1);
  transparent_crc(beBv7419, "beBv7419", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

