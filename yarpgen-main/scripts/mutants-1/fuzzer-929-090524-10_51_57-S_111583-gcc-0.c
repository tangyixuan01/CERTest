#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

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
  b = 0;
  return 1;
}

static short m(unsigned k)
{
  int pfVWnB0T = -1150392711;
  int ejl3ArR9 = -2147483648;
  const unsigned short *n[65];
  g = &n[4];
  k || l();
  long a = k;
  char i = 0;
  unsigned long j = k;
  while (j--)
  {
    *((char *) (a++)) = i;
    while (pfVWnB0T)
      ejl3ArR9++;

  }

  c = h(d);
  f = k;
  transparent_crc(ejl3ArR9, "ejl3ArR9", 1);
  transparent_crc(pfVWnB0T, "pfVWnB0T", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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

