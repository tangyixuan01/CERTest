#include "/home/yixuan/codeExtract/csmith.h"

// insert-for-snippet

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
  int k = 0;
  *e = &k;
  fn1();
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int ay9p487s = -2147483648;
  char bBa1Px69 = (signed char)127;
  int nOLrhYP5 = 2147483647;
  short Y4w1ont7 = (short)-32768;
  char pMT1hm4g = (signed char)127;
  int OjrsehuH = -1649728452;
  char UoaiJWPl = (signed char)127;
  int PxHGQU4D = 2147483647;
  for (ay9p487s = 0; ay9p487s < 8; ay9p487s++)
  {
    char ap = (pMT1hm4g % PxHGQU4D) + Y4w1ont7;
    unsigned aq = (~0x1F) & (bBa1Px69 % ((7 * (~ap)) ^ OjrsehuH));
    if ((aq < 1027) && nOLrhYP5)
      pMT1hm4g = ((1958 | UoaiJWPl) + 15) & 15;
  }

  fn2();
  transparent_crc(PxHGQU4D, "PxHGQU4D", 1);
  transparent_crc(UoaiJWPl, "UoaiJWPl", 1);
  transparent_crc(OjrsehuH, "OjrsehuH", 1);
  transparent_crc(pMT1hm4g, "pMT1hm4g", 1);
  transparent_crc(Y4w1ont7, "Y4w1ont7", 1);
  transparent_crc(nOLrhYP5, "nOLrhYP5", 1);
  transparent_crc(bBa1Px69, "bBa1Px69", 1);
  transparent_crc(ay9p487s, "ay9p487s", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

