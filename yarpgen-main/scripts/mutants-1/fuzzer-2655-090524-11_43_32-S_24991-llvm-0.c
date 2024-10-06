#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a[1];
int b;
int d;
int e;
int f;
int h;
int i;
int j;
volatile int c = 1;
char g;
void fn1(int p1)
{
  int gCKq0Pr1 = -2147483648;
  int RO1ki0yY = 2147483647;
  transparent_crc(RO1ki0yY, "RO1ki0yY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (gCKq0Pr1)
  {
    case 5:
      RO1ki0yY = 1;
      break;

    case 6:
      RO1ki0yY = 2;
      break;

    case 7:
      RO1ki0yY = 3;
      break;

  }

  transparent_crc(gCKq0Pr1, "gCKq0Pr1", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  b = a[p1];
}

void fn2()
{
  for (h = 15; h < 22; h += 5)
  {
    if (c)
    {
      d--;
      f--;
      g--;
      if (d)
      {
        j = (f < 0) || ((f >= 0) > f);
        i = (e ^= 1);
      }
      e = 0;
    }
    else
    {
      g = 0;
    }
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  a[0] = 1;
  fn2();
  fn1(g & 1);
  if (b != 1)
  {
    __builtin_abort();
  }
  return 0;
}

