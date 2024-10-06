#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

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
  int * lc2xmv6F = &i;
  unsigned char HSbydI9R = (unsigned char)0;
  for (long m = 0; m < 8; ++m)
  {
    switch (HSbydI9R)
    {
      case 0x95:
        *lc2xmv6F = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *lc2xmv6F = 0x00;
        break;

      default:
        *lc2xmv6F = 0x05;
        break;

    }

    d = 1;
  }

  for (unsigned char p = 0; p < 17; p += ((d) ? (i) : (0)) - 35)
  {
    long t = (h[p]) ? (i) : (j[p]);
    g[p] = t;
    transparent_crc(t, "t", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  transparent_crc(HSbydI9R, "HSbydI9R", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (g[0])
  {
    __builtin_abort();
  }
}

