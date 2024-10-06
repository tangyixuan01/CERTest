#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a = 0;
int b = 0;
int d = 0;
static int c = 2;
int *f = 0;
int *bPtr = &b;
long e = 0;
long * const ePtr = &e;
static void fn5()
{
  int bsvhLF6K = -2147483648;
  volatile unsigned int  uLHUE8nR = 2691040176U;
  volatile unsigned int * Ca6_Y0z7 = &uLHUE8nR;
  int Z8HNPrt6 = -2147483648;
  for (Z8HNPrt6 = 0xbad; Z8HNPrt6 >= 0; Z8HNPrt6--)
  {
    if (Z8HNPrt6 == 1)
      Ca6_Y0z7[0x708 / 4] = 0xbeefdead;
    for (bsvhLF6K = 1; bsvhLF6K >= 0; bsvhLF6K--)
    {
      Ca6_Y0z7[0x708 / 4] = 0xbadcab;
      Ca6_Y0z7[0x704 / 4] = bsvhLF6K;
    }

  }

  f = &c;
  *bPtr = 0;
  transparent_crc(Z8HNPrt6, "Z8HNPrt6", 1);
  transparent_crc(bsvhLF6K, "bsvhLF6K", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *f = 0;
}

int *fn6()
{
  *bPtr = 8;
  *ePtr = 1 == ((-1L) / (1 ^ ((unsigned) c)));
  return &d;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn5();
  f = fn6();
  printf("checksum = %X\n", e);
}

