#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
union 
{
  short c;
  int k;
} m;
int *f = (int *) (&m);
void l()
{
  m.k = 1;
  *f = 2;
  short *n = (short *) (&m);
  *n = 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int c3qnymXJ = -939163786;
  l();
  while (c3qnymXJ > 1)
    ;

  transparent_crc(c3qnymXJ, "c3qnymXJ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d  %d\n", m.c, m.k);
}

