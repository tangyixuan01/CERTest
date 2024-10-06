#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a;
int b;
int c[2][8];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int _SpaLDMX = 1162105347;
  int U4iIQ3AW = -2147483648;
  int F3LcdWrk = -540747769;
  int S6T21Xys = 2147483647;
  int G4MTInQF = -2147483648;
  for (a = 0; a < 8; a++)
  {
    for (b = 0; b < 2; b++)
    {
      if (!S6T21Xys)
      {
        _SpaLDMX = U4iIQ3AW;
        if ((F3LcdWrk < 1) && U4iIQ3AW)
          L:
        ;

        (G4MTInQF / _SpaLDMX) && 0;
      }
      c[b][a] = c[b][b + 6] ^ 1;
    }

  }

  if (c[0][7] != 0)
  {
    __builtin_abort();
  }
  transparent_crc(G4MTInQF, "G4MTInQF", 1);
  transparent_crc(S6T21Xys, "S6T21Xys", 1);
  transparent_crc(F3LcdWrk, "F3LcdWrk", 1);
  transparent_crc(U4iIQ3AW, "U4iIQ3AW", 1);
  transparent_crc(_SpaLDMX, "_SpaLDMX", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

