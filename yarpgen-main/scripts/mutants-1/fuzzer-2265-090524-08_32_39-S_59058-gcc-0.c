#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int c;
int d;
short b = -1;
void foo()
{
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
  int XT7l3Suh = -2147483648;
  int nVZhFyzY = -1496704643;
  b++;
  l2:
  if (b)
  {
    switch (XT7l3Suh)
    {
      case 5:
        nVZhFyzY = 1;
        break;

      case 6:
        nVZhFyzY = 2;
        break;

      case 7:
        nVZhFyzY = 3;
        break;

    }

    goto l2;
  }

  bar();
  printf("%d\n", c);
  transparent_crc(nVZhFyzY, "nVZhFyzY", 1);
  transparent_crc(XT7l3Suh, "XT7l3Suh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

