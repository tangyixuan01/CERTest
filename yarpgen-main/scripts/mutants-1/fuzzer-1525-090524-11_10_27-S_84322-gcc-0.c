#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

extern int a[10];
int g();
void f()
{
  a[a[1]] = g();
}

int a[10];
int g()
{
  int lphP8ciC = -1145458554;
  int H5lwzdAJ = -2147483648;
  int rhIGP5Ys = -2147483648;
  transparent_crc(rhIGP5Ys, "rhIGP5Ys", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; lphP8ciC < 1; lphP8ciC++)
    if (rhIGP5Ys)
    H5lwzdAJ++;

  transparent_crc(H5lwzdAJ, "H5lwzdAJ", 1);
  transparent_crc(lphP8ciC, "lphP8ciC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return a[1] = 2;
}

void f();
int main()
{
  platform_main_begin();
  crc32_gentab();
  f();
  __builtin_printf("%d %d\n", a[1], a[2]);
}

