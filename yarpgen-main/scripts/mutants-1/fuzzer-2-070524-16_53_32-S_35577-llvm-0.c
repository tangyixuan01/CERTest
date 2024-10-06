#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
union 
{
  short a;
  long b;
} c;
short *d = &c.a;
int e = 0;
long *f = &c.b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  short tZnps2mQ = (short)-32768;
  int QgUO56DE = -32600111;
  for (; e <= 1; e++)
  {
    QgUO56DE = -(QgUO56DE & tZnps2mQ);
    *f = 0;
    ++(*d);
  }

  transparent_crc(QgUO56DE, "QgUO56DE", 1);
  transparent_crc(tZnps2mQ, "tZnps2mQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", c.a);
}

