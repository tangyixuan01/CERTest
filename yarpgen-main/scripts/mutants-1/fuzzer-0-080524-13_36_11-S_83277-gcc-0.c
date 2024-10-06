#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int rk;
int si = 0;
int jr[2];
int wv(signed char n8)
{
  unsigned N6nkZQFO = 0U;
  int JlT2GXVv = 2147483647;
  int tz35VKyI = -1297013905;
  const int tw = 8;
  int xq[tw];
  int bj;
  int pu = 0;
  for (bj = 0; bj < tw; ++bj)
  {
    xq[bj] = 0;
  }

  bj = 0;
  while (bj < 1)
  {
    int gs = n8 ^ 128;
    if (gs != 0)
    {
      int u7[3];
      while (bj < 2)
      {
        u7[bj] = 0;
        ++bj;
      }

      jr[0] = u7[0];
      rk = xq[0];
      pu = n8;
      if (si != 0)
      {
        for (tz35VKyI = 0; tz35VKyI < 1; tz35VKyI++)
        {
          N6nkZQFO = (N6nkZQFO ^ N6nkZQFO) ^ 40;
          N6nkZQFO;
          if (JlT2GXVv)
            ;
          printf("%X\n", N6nkZQFO);
        }

        return si;
      }
    }
    transparent_crc(gs, "gs", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  transparent_crc(tz35VKyI, "tz35VKyI", 1);
  transparent_crc(JlT2GXVv, "JlT2GXVv", 1);
  transparent_crc(N6nkZQFO, "N6nkZQFO", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return pu;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  signed char ax = 1;
  return wv(ax) != ax;
}

