#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a[36];
int b;
int c;
int d;
int e;
int f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int rh3OvEX2 = 786515188;
  int gSCRXy_Y = -360281399;
  int LO52hEod = 2147483647;
  int v9YGlqoF = -1586513341;
  int CKX8ykYn = 2147483647;
  for (c = 0; c < 6; c++)
  {
    for (d = 0; d < 6; d++)
    {
      for (b = 0; b < 6; b++)
      {
        a[6 + c] = a[(c * 6) + c] ^ 1;
        for (; v9YGlqoF >= 0; v9YGlqoF--)
        {
          gSCRXy_Y = LO52hEod;
          LO52hEod = (rh3OvEX2 ^ (rh3OvEX2 && CKX8ykYn)) && 1;
        }

      }

    }

  }

  if (a[7] != 0)
  {
    __builtin_abort();
  }
  transparent_crc(CKX8ykYn, "CKX8ykYn", 1);
  transparent_crc(v9YGlqoF, "v9YGlqoF", 1);
  transparent_crc(LO52hEod, "LO52hEod", 1);
  transparent_crc(gSCRXy_Y, "gSCRXy_Y", 1);
  transparent_crc(rh3OvEX2, "rh3OvEX2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

