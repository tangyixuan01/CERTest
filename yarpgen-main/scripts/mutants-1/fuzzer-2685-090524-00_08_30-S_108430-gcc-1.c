#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet

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
  int * Y1rFCjli = &i;
  unsigned char MJIcsCfw = (unsigned char)64;
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
  transparent_crc(MJIcsCfw, "MJIcsCfw", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (g[0])
  {
    switch (MJIcsCfw)
    {
      case 0x95:
        *Y1rFCjli = MJIcsCfw - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *Y1rFCjli = MJIcsCfw - 0x80;
        break;

      default:
        *Y1rFCjli = 0;
        break;

    }

    __builtin_abort();
  }
}

