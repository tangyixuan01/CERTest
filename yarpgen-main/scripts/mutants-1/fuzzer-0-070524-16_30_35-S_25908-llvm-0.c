#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

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
  int  V3cDoXFJ = 2074828092;
  int * Ok0iIvRU = &V3cDoXFJ;
  unsigned short KHBixRST = (unsigned short)36250;
  int o_blMXLQ = -2147483648;
  unsigned int UH6ya_0L = 4294967295U;
  if (!o_blMXLQ)
  {
    KHBixRST = UH6ya_0L;
    *Ok0iIvRU = KHBixRST | UH6ya_0L;
  }
  while (i)
  {
    ;
  }

  short k = f && (h % 5);
  int l = (~j) % f;
  short m = (~j) & k;
  int n = 5 % (~h);
  transparent_crc(UH6ya_0L, "UH6ya_0L", 1);
  transparent_crc(o_blMXLQ, "o_blMXLQ", 1);
  transparent_crc(KHBixRST, "KHBixRST", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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
  fn3();
  printf("%X\n", a);
  return 0;
}

