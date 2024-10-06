#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int c[4][8] = {{1}};
int d;
int e;
int fn1(int p)
{
  int WUvjzYwM = -2147483648;
  int EoHmtngd = -1933726220;
  switch (WUvjzYwM)
  {
    case 5:
      EoHmtngd = 1;
      break;

    case 6:
      EoHmtngd = 2;
      break;

    case 7:
      EoHmtngd = 3;
      break;

  }

  transparent_crc(EoHmtngd, "EoHmtngd", 1);
  transparent_crc(WUvjzYwM, "WUvjzYwM", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (p) ? (1 % p) : (0);
}

void fn2()
{
  for (e = 0; e < 4; e++)
  {
    c[d + 1][e + 1] = c[e][e];
    b = fn1(a ^ 1);
  }

}

void fn3()
{
  fn2();
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn3();
  if (c[1][2] != 1)
  {
    __builtin_abort();
  }
  return 0;
}

