#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

char a = -1;
int b;
short fn1(int p1)
{
  int myr3suzT = -16482036;
  int x_gOzC4L = -2147483648;
  transparent_crc(x_gOzC4L, "x_gOzC4L", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (myr3suzT)
  {
    case 5:
      x_gOzC4L = 1;
      break;

    case 6:
      x_gOzC4L = 2;
      break;

    case 7:
      x_gOzC4L = 3;
      break;

  }

  transparent_crc(myr3suzT, "myr3suzT", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p1 >> 1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  b = fn1(a);
  if (b != (-1))
  {
    __builtin_abort();
  }
  return 0;
}

