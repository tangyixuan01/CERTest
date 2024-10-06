#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  const long int SxkPHECz = -9223372036854775807LL;
  unsigned long int P3HLqtVJ = 1;
  c = 0;
  P3HLqtVJ = 4081116982543369 & SxkPHECz;
  for (; c <= 3; c++)
  {
    fn2();
    fn1();
    e = 0;
  }

  transparent_crc(P3HLqtVJ, "P3HLqtVJ", 1);
  transparent_crc(SxkPHECz, "SxkPHECz", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn3();
  printf("%X\n", a);
  return 0;
}

