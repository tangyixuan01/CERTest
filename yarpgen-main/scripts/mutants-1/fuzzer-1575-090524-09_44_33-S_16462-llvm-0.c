#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
static short fn1(int p)
{
  return (p) ? (0) : (1);
}

unsigned short fn2(int p)
{
  return -p;
}

int a[1];
int b;
int *c = &b;
int d;
void fn3()
{
  int *t = &d;
  if (fn2(1) >= fn1(t == (&a[0])))
  {
    *c = 1;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  d_vy61g2 = -2147483648;
  int * DSbnf36h = &d_vy61g2;
  unsigned short PujsWmAI = (unsigned short)65535;
  unsigned int bwuQaVN0 = 3088589374U;
  fn3();
  printf("%d\n", b);
  transparent_crc(bwuQaVN0, "bwuQaVN0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *DSbnf36h = PujsWmAI | bwuQaVN0;
  transparent_crc(PujsWmAI, "PujsWmAI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

