#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int printf(const char *, ...);
int a;
int c;
int d;
short b = -1;
void foo()
{
  int z0RZ6pdA = 2147483647;
  int gyCSrGj5 = 885487867;
  if (!(z0RZ6pdA >= 0))
  {
    gyCSrGj5++;
    printf("g_5326=%lld\n", (long long) 2);
  }
  transparent_crc(gyCSrGj5, "gyCSrGj5", 1);
  transparent_crc(z0RZ6pdA, "z0RZ6pdA", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  b++;
}

void bar()
{
  l1:
  foo();

  d = -3;
  for (a = 0; a > (-3); a = d)
  {
    c |= b;
  }

  if (b)
  {
    goto l1;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  b++;
  l2:
  if (b)
  {
    goto l2;
  }

  bar();
  printf("%d\n", c);
  return 0;
}

