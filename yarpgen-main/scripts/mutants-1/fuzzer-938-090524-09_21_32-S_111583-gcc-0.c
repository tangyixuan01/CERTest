#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int printf(const char *, ...);
int b;
int c;
int d;
char e;
short f;
const unsigned short **g;
char h(char k)
{
  if (k)
  {
    return '0';
  }
  return 0;
}

int l()
{
  unsigned  QFVEHjLp = 0U;
  unsigned * dGfpVlT3 = &QFVEHjLp;
  unsigned Mjr75Vhv = 4294967295U;
  unsigned RsvEfPaI = 4294967295U;
  char aI4UOxMZ = (signed char)127;
  if ((aI4UOxMZ < 1) || (RsvEfPaI < 7))
    *dGfpVlT3 = Mjr75Vhv;
  b = 0;
  transparent_crc(aI4UOxMZ, "aI4UOxMZ", 1);
  transparent_crc(RsvEfPaI, "RsvEfPaI", 1);
  transparent_crc(Mjr75Vhv, "Mjr75Vhv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 1;
}

static short m(unsigned k)
{
  const unsigned short *n[65];
  g = &n[4];
  k || l();
  long a = k;
  char i = 0;
  unsigned long j = k;
  while (j--)
  {
    *((char *) (a++)) = i;
  }

  c = h(d);
  f = k;
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  long o = (e < 0) << 5;
  m(o);
  printf("%d\n", f);
}

