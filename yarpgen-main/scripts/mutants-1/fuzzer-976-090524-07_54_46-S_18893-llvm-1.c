#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-if-snippet

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
  int ET8VW4oi = 1340501639;
  volatile int YN1dTVpW = 2147483647;
  int zux40DiV = -2147483648;
  int lSTs7QkJ = -2147483648;
  int K0rjPZxJ = -82993574;
  if (ET8VW4oi > 7)
    return 0;
  zux40DiV = (YN1dTVpW = K0rjPZxJ | (0 <= (lSTs7QkJ |= 1)));
  fn2();
  transparent_crc(K0rjPZxJ, "K0rjPZxJ", 1);
  transparent_crc(lSTs7QkJ, "lSTs7QkJ", 1);
  transparent_crc(zux40DiV, "zux40DiV", 1);
  transparent_crc(YN1dTVpW, "YN1dTVpW", 1);
  transparent_crc(ET8VW4oi, "ET8VW4oi", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

