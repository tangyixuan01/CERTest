#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b;
int fn1(int p1, int p2)
{
  return ((p1 > 0) || ((p2 < 0) && (-p2))) ? (p1) : (p1 + p2);
}

int fn2()
{
  int c = -7;
  for (; c != 1; c = fn1(c, 6))
  {
    b = c <= 0;
    if (b)
    {
      if (c)
      {
        for (; a;)
        {
          ;
        }

      }
    }
    else
    {
      return 0;
    }
  }

  for (;;)
  {
    ;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int F0mKtU4p = 2147483647;
  short SLHbejOF = (short)-18459;
  fn2();
  transparent_crc(SLHbejOF, "SLHbejOF", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  F0mKtU4p |= SLHbejOF;
  transparent_crc(F0mKtU4p, "F0mKtU4p", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

