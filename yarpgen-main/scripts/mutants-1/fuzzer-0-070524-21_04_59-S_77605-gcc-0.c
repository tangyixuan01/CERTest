#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a;
int b;
int c[2][8];
int main()
{
  platform_main_begin();
  crc32_gentab();
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
    for (BWTJ7fC0 = 0; 1; BWTJ7fC0 = 5)
      if (!AGjmfYHT)
      return XncerBgU;

  }
  transparent_crc(XncerBgU, "XncerBgU", 1);
  transparent_crc(AGjmfYHT, "AGjmfYHT", 1);
  transparent_crc(BWTJ7fC0, "BWTJ7fC0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

