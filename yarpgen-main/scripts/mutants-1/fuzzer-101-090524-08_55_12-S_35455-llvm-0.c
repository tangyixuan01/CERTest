#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

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
  int edhTk_F5 = -2147483648;
  int wMXErzN_ = 255153829;
  int d0Xt9guk = 2147483647;
  int bnN_KG3v = 1170207883;
  l();
  if (bnN_KG3v)
    d0Xt9guk = 0;
  else
    d0Xt9guk = wMXErzN_ || (edhTk_F5 = 0);
  transparent_crc(bnN_KG3v, "bnN_KG3v", 1);
  transparent_crc(d0Xt9guk, "d0Xt9guk", 1);
  transparent_crc(wMXErzN_, "wMXErzN_", 1);
  transparent_crc(edhTk_F5, "edhTk_F5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d  %d\n", m.c, m.k);
}

