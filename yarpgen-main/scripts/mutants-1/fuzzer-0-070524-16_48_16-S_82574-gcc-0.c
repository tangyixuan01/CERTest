#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

char a;
char b;
char c;
char d[2][3];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int LHks2SjC = -2147483648;
  int rcoh02DB = 2147483647;
  int tMuHQ4k0 = 2147483647;
  int iSa1y2E6 = -2147483648;
  for (; a < 2; a++)
  {
    for (b = 0; b < 3; b++)
    {
      if (c)
      {
        d[a][b] = 1;
      }
      for (; rcoh02DB < 1; rcoh02DB++)
        for (iSa1y2E6 = 0; iSa1y2E6 < 2; iSa1y2E6++)
      {
        (tMuHQ4k0 && iSa1y2E6) || (LHks2SjC ^= !tMuHQ4k0);
        tMuHQ4k0 = 0;
      }


    }

  }

  transparent_crc(iSa1y2E6, "iSa1y2E6", 1);
  transparent_crc(tMuHQ4k0, "tMuHQ4k0", 1);
  transparent_crc(rcoh02DB, "rcoh02DB", 1);
  transparent_crc(LHks2SjC, "LHks2SjC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return d[0][0];
}

