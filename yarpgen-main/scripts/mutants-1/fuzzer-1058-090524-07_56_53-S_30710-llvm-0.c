#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

static int *b;
int a;
int **c = &b;
int **e = &b;
int *f[2];
int g = 1;
char d;
void fn1()
{
  int *i = 0;
  ((&b) == (&f[1])) > a;
  for (; d < 1; d++)
  {
    *c = &g;
    if (*b)
    {
      return;
    }
  }

  *i = 0;
}

void fn2()
{
  int YfdWikFv = 2023063084;
  int Z7AN4iBI = -1670852979;
  int pV7XCFHd = 912572194;
  char WkHQMU_3 = (signed char)-128;
  volatile int AONMvciV = -2147483648;
  int kmtuVIgM = -298097971;
  int ru9PhMvW = -2147483648;
  if (AONMvciV)
  {
    kmtuVIgM--;
    YfdWikFv--;
    WkHQMU_3--;
    if (kmtuVIgM)
    {
      pV7XCFHd = (YfdWikFv < 0) || ((YfdWikFv >= 0) > YfdWikFv);
      Z7AN4iBI = (ru9PhMvW ^= 1);
    }
    ru9PhMvW = 0;
  }
  else
    WkHQMU_3 = 0;
  int k = 0;
  *e = &k;
  transparent_crc(ru9PhMvW, "ru9PhMvW", 1);
  transparent_crc(kmtuVIgM, "kmtuVIgM", 1);
  transparent_crc(AONMvciV, "AONMvciV", 1);
  transparent_crc(WkHQMU_3, "WkHQMU_3", 1);
  transparent_crc(pV7XCFHd, "pV7XCFHd", 1);
  transparent_crc(Z7AN4iBI, "Z7AN4iBI", 1);
  transparent_crc(YfdWikFv, "YfdWikFv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  fn1();
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn2();
  return 0;
}

