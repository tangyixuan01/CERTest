#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int rk;
int si = 0;
int jr[2];
int wv(signed char n8)
{
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
        return si;
      }
    }
    transparent_crc(gs, "gs", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  return pu;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int Hh0rvKdi = -948640435;
  int q76ma4eT = 2147483647;
  int MABv_8Ur = -183151464;
  int noYINtdm = -1555390303;
  MABv_8Ur = (q76ma4eT ^ noYINtdm) ^ (~Hh0rvKdi);
  signed char ax = 1;
  transparent_crc(noYINtdm, "noYINtdm", 1);
  transparent_crc(MABv_8Ur, "MABv_8Ur", 1);
  transparent_crc(q76ma4eT, "q76ma4eT", 1);
  transparent_crc(Hh0rvKdi, "Hh0rvKdi", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return wv(ax) != ax;
}

