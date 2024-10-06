#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
int d;
int f;
const char a = 239;
short e;
short b;
short h = 2;
long g;
short *c = &e;
int *i = &f;
int j(int k, int l)
{
  int yz406NTR = -2147483648;
  unsigned int qXtxed3V = 57080983U;
  while (1)
  {
    if (qXtxed3V < 10)
      return yz406NTR;
    if (qXtxed3V < (10 * 10))
      return yz406NTR + 1;
    if (qXtxed3V < ((10 * 10) * 10))
      return yz406NTR + 2;
    if (qXtxed3V < (((10 * 10) * 10) * 10))
      return yz406NTR + 3;
    yz406NTR += 4;
    qXtxed3V /= ((10 * 10) * 10) * 10;
  }

  transparent_crc(qXtxed3V, "qXtxed3V", 1);
  transparent_crc(yz406NTR, "yz406NTR", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (k < 0) ? (k) : (k >> l);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  for (;;)
  {
    g = ((char) d) + a;
    b = h && j(g, 6);
    *c = b;
    *i = e;
    break;
  }

  printf("%d\n", f);
}

