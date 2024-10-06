#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

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
  int XT5OUIwE = -953035587;
  int Z3j7Wszp = -736495155;
  int IksxieN_ = 2147483647;
  volatile int iJ9r58A6 = -2147483648;
  for (long m = 0; m < 8; ++m)
  {
    if (Z3j7Wszp)
    {
      XT5OUIwE = (IksxieN_ || IksxieN_) ? (0) : (IksxieN_);
      iJ9r58A6;
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

  transparent_crc(iJ9r58A6, "iJ9r58A6", 1);
  transparent_crc(IksxieN_, "IksxieN_", 1);
  transparent_crc(Z3j7Wszp, "Z3j7Wszp", 1);
  transparent_crc(XT5OUIwE, "XT5OUIwE", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (g[0])
  {
    __builtin_abort();
  }
}

