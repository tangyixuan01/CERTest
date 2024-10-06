#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b;
int c[4][8] = {{1}};
int d;
int e;
int fn1(int p)
{
  return (p) ? (1 % p) : (0);
}

void fn2()
{
  int iUt6V8w1 = 2147483647;
  int xGiPnvmj = -1091509393;
  unsigned char C5SAv1Ha = (unsigned char)0;
  transparent_crc(C5SAv1Ha, "C5SAv1Ha", 1);
  transparent_crc(xGiPnvmj, "xGiPnvmj", 1);
  transparent_crc(iUt6V8w1, "iUt6V8w1", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (e = 0; e < 4; e++)
  {
    c[d + 1][e + 1] = c[e][e];
    iUt6V8w1 = C5SAv1Ha && (xGiPnvmj = C5SAv1Ha);
    b = fn1(a ^ 1);
  }

}

void fn3()
{
  fn2();
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn3();
  if (c[1][2] != 1)
  {
    __builtin_abort();
  }
  return 0;
}

