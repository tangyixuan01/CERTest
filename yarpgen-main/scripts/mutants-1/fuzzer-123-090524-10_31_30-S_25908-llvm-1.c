#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet

int printf(const char *, ...);
int a;
int c;
int d;
int e;
int g;
int i;
int j;
volatile int b;
volatile short f = 5;
volatile char h;
short o;
void fn1()
{
  while (i)
  {
    ;
  }

  short k = f && (h % 5);
  int l = (~j) % f;
  short m = (~j) & k;
  int n = 5 % (~h);
  g = (f | 1) && ((m ^ l) | n);
}

static short fn2()
{
  int p = 3;
  for (; p >= 0; p--)
  {
    o = 0;
    for (; o <= 3; o++)
    {
      d = 0;
      for (; d <= 3; d++)
      {
        b &= 5;
      }

    }

    if (e)
    {
      break;
    }
  }

  return 1;
}

static int fn3()
{
  c = 0;
  for (; c <= 3; c++)
  {
    fn2();
    fn1();
    e = 0;
  }

  return 1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int sCgl9_GD = -169173822;
  int sEzlq2bS = -1206185572;
  long NTmzWsXt = 2384611028671613709LL;
  int z24iJtA5 = 2147483647;
  z24iJtA5 = ~(NTmzWsXt - (~z24iJtA5));
  fn3();
  printf("%X\n", a);
  transparent_crc(z24iJtA5, "z24iJtA5", 1);
  transparent_crc(NTmzWsXt, "NTmzWsXt", 1);
  transparent_crc(sEzlq2bS, "sEzlq2bS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (sCgl9_GD)
  {
    case 5:
      sEzlq2bS = 1;
      break;

    case 6:
      sEzlq2bS = 2;
      break;

    case 7:
      sEzlq2bS = 3;
      break;

  }

  transparent_crc(sCgl9_GD, "sCgl9_GD", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

