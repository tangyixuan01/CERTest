#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int a = 1;
int c;
int *f = &c;
int g;
int *h;
int *i = &a;
int *k = &c;
int l;
char b;
char *d = &b;
char **e = &d;
char ***j = &e;
static int fn1()
{
  volatile unsigned short  LF2EMInw = (unsigned short)47126;
  volatile unsigned short * yT0Asm5h = &LF2EMInw;
  int m;
  l = *(*e);
  *f = 1;
  for (m = 0; m < 2; m++)
  {
    *(*e) = ((*k) || ((h = &g) == ((int *) (&f)))) == 0;
  }

  for (; b >= 0; b--)
  {
    ;
  }

  if (*(*e))
  {
    *(yT0Asm5h + 0) = 0xAA;
    *i = 0;
  }
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  printf("%d\n", a);
  return 0;
}

