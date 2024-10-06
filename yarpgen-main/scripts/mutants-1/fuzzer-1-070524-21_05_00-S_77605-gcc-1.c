#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-if-snippet

int a;
int b;
int c[2][8];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int UibIJRdl = -541489998;
  long GOUEezW8 = 9223372036854775807LL;
  int mgXjF2lZ = -1555762080;
  int BWTJ7fC0 = -2147483648;
  int AGjmfYHT = -206811786;
  int XncerBgU = -2147483648;
  for (a = 0; a < 8; a++)
  {
    for (b = 0; b < 2; b++)
    {
      c[b][a] = c[b][b + 6] ^ 1;
    }

  }

  if (c[0][7] != 0)
  {
    __builtin_abort();
    if (UibIJRdl)
      mgXjF2lZ = --GOUEezW8;
    for (BWTJ7fC0 = 0; 1; BWTJ7fC0 = 5)
      if (!AGjmfYHT)
      return XncerBgU;

  }
  transparent_crc(XncerBgU, "XncerBgU", 1);
  transparent_crc(AGjmfYHT, "AGjmfYHT", 1);
  transparent_crc(BWTJ7fC0, "BWTJ7fC0", 1);
  transparent_crc(mgXjF2lZ, "mgXjF2lZ", 1);
  transparent_crc(GOUEezW8, "GOUEezW8", 1);
  transparent_crc(UibIJRdl, "UibIJRdl", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

