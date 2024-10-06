#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a = 0;
int b = 0;
int d = 0;
static int c = 2;
int *f = 0;
int *bPtr = &b;
long e = 0;
long * const ePtr = &e;
static void fn5()
{
  f = &c;
  *bPtr = 0;
  *f = 0;
}

int *fn6()
{
  unsigned short t9iuSVs4 = (unsigned short)8314;
  if (t9iuSVs4)
    t9iuSVs4 = (t9iuSVs4 << 1) ^ 1;
  *bPtr = 8;
  *ePtr = 1 == ((-1L) / (1 ^ ((unsigned) c)));
  transparent_crc(t9iuSVs4, "t9iuSVs4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return &d;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn5();
  f = fn6();
  printf("checksum = %X\n", e);
}

