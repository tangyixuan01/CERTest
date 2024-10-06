#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

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
  int swvJ_n0W = 1031789211;
  for (long m = 0; m < 8; ++m)
  {
    for (swvJ_n0W = -2; swvJ_n0W < (-1); swvJ_n0W++)
      ;

    d = 1;
  }

  for (unsigned char p = 0; p < 17; p += ((d) ? (i) : (0)) - 35)
  {
    long t = (h[p]) ? (i) : (j[p]);
    g[p] = t;
    transparent_crc(t, "t", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  transparent_crc(swvJ_n0W, "swvJ_n0W", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (g[0])
  {
    __builtin_abort();
  }
}

