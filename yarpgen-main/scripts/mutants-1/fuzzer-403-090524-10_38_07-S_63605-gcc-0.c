#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int a;
int b[8] = {2, 0, 0, 0, 0, 0, 0, 0};
int c[8];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int N62KH_hU = 2147483647;
  int Hpu7UvPj = -2147483648;
  volatile short WkB0HOvd = (short)-1160;
  signed HNDIvRC6 = 0;
  int d;
  for (; a < 8; a++)
  {
    d = b[a] >> 1;
    Hpu7UvPj = (HNDIvRC6 / WkB0HOvd) > N62KH_hU;
    c[a] = d != 0;
  }

  printf("%d\n", c[0]);
  transparent_crc(HNDIvRC6, "HNDIvRC6", 1);
  transparent_crc(WkB0HOvd, "WkB0HOvd", 1);
  transparent_crc(Hpu7UvPj, "Hpu7UvPj", 1);
  transparent_crc(N62KH_hU, "N62KH_hU", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

