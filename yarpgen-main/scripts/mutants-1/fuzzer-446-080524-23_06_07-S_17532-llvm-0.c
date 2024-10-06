#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int printf(const char *, ...);
int *a;
int *f;
int b = 1;
int e = 1;
static int **c = &a;
char d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int zHb30SkI = -687442403;
  long s1Mu0yN_ = -9223372036854775807LL;
  int OMmdG9fn = 2147483647;
  int **g = &a;
  *c = &b;
  f = *g;
  int *h = f;
  char *i = &d;
  lbl:
  --(*i);

  *h &= 1 % e;
  if (d)
  {
    for (int d = 0; d < 8; d++)
    {
      zHb30SkI ^= s1Mu0yN_;
      OMmdG9fn = zHb30SkI;
      zHb30SkI ^= 1;
    }

    goto lbl;
  }
  printf("%d\n", b);
  transparent_crc(OMmdG9fn, "OMmdG9fn", 1);
  transparent_crc(s1Mu0yN_, "s1Mu0yN_", 1);
  transparent_crc(zHb30SkI, "zHb30SkI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

