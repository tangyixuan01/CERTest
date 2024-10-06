#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-assignment-snippet -> insert-for-snippet

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
  volatile int Q21U6rnv = 84637228;
  int QDEbFsgu = -2147483648;
  short yEvtBmGu = (short)-19367;
  unsigned lRaA2oCG = 4294967295U;
  int tgzBFZHc = 2147483647;
  short wOczQPZC = (short)3947;
  int c3qnymXJ = -939163786;
  l();
  yEvtBmGu = ((~tgzBFZHc) | ((~lRaA2oCG) ^ ((~wOczQPZC) + yEvtBmGu))) | 2;
  while (c3qnymXJ > 1)
    ;

  transparent_crc(c3qnymXJ, "c3qnymXJ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (QDEbFsgu = 0; QDEbFsgu < 4; QDEbFsgu++)
  {
    Q21U6rnv = Q21U6rnv + 3;
  }

  transparent_crc(wOczQPZC, "wOczQPZC", 1);
  transparent_crc(tgzBFZHc, "tgzBFZHc", 1);
  transparent_crc(lRaA2oCG, "lRaA2oCG", 1);
  transparent_crc(yEvtBmGu, "yEvtBmGu", 1);
  transparent_crc(QDEbFsgu, "QDEbFsgu", 1);
  transparent_crc(Q21U6rnv, "Q21U6rnv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d  %d\n", m.c, m.k);
}

