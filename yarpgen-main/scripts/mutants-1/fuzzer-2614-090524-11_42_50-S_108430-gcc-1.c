#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet

static long d;
static int i = 37;
static unsigned long a[22];
static unsigned short c[22];
static unsigned g[80];
static unsigned short *h = c;
static unsigned long *j = a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int mhIfvdtB = 1690602782;
  int Y4PLjMw3 = 2147483647;
  int YZuK_dBX = 1514473072;
  for (long m = 0; m < 8; ++m)
  {
    d = 1;
  }

  for (unsigned char p = 0; p < 17; p += ((d) ? (i) : (0)) - 35)
  {
    long t = (h[p]) ? (i) : (j[p]);
    g[p] = t;
    transparent_crc(t, "t", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  switch (Y4PLjMw3)
  {
    case 5:
      YZuK_dBX = 1;
      break;

    case 6:
      YZuK_dBX = 2;
      break;

    case 7:
      YZuK_dBX = 3;
      break;

    while (mhIfvdtB)
      ;

  }

  transparent_crc(YZuK_dBX, "YZuK_dBX", 1);
  transparent_crc(Y4PLjMw3, "Y4PLjMw3", 1);
  transparent_crc(mhIfvdtB, "mhIfvdtB", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (g[0])
  {
    __builtin_abort();
  }
}

