#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

static struct S
{
  int *p1;
  int *p2;
} s;
int foo()
{
  int i = 1;
  int j = 2;
  struct S s;
  int **p;
  s.p1 = &i;
  s.p2 = &j;
  p = &s.p1;
  uintptr_t pi = (uintptr_t) p;
  pi = pi + (sizeof(int *));
  p = (int **) pi;
  *(*p) = 3;
  return j;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  signed lKUouS76 = 0;
  unsigned fl1qKDsF = 4294967295U;
  volatile unsigned yUIS6QaW = 4294967295U;
  fl1qKDsF |= (lKUouS76 = yUIS6QaW);
  if (foo() != 3)
  {
    __builtin_abort();
  }
  transparent_crc(yUIS6QaW, "yUIS6QaW", 1);
  transparent_crc(fl1qKDsF, "fl1qKDsF", 1);
  transparent_crc(lKUouS76, "lKUouS76", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

