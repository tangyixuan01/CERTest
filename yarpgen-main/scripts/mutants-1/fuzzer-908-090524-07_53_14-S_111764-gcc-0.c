#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
char a;
short b;
short c;
static short *d = &b;
static short *e = &b;
short f(short g, short h)
{
  return g * h;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  IRk5E4d9 = 208144325;
  int * g8BVUOPv = &IRk5E4d9;
  int ** Qn_Ai6Xc = &g8BVUOPv;
  int *** FKkoQ8gi = &Qn_Ai6Xc;
  int **** aQWqGn8x = &FKkoQ8gi;
  int ***** amil09RX = &aQWqGn8x;
  int V7JW3EPN = -2147483648;
  *e = 2;
  *(*(*(*amil09RX))) = &V7JW3EPN;
  a = 1;
  for (; a <= 9; a++)
  {
    short *i = &c;
    *i = (*d = f(*e, *e));
  }

  transparent_crc(V7JW3EPN, "V7JW3EPN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", c);
}

