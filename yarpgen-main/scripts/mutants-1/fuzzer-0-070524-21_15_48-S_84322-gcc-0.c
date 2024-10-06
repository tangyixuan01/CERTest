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
  int hi3Ck71E = 2010489262;
  int eJ6h1oNS = 2147483647;
  int RkBjQ9I3 = -1169243487;
  short eiRSx9Op = (short)32767;
  transparent_crc(eiRSx9Op, "eiRSx9Op", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (hi3Ck71E = 0; hi3Ck71E > (-3); hi3Ck71E = RkBjQ9I3)
    eJ6h1oNS |= eiRSx9Op;

  transparent_crc(RkBjQ9I3, "RkBjQ9I3", 1);
  transparent_crc(eJ6h1oNS, "eJ6h1oNS", 1);
  transparent_crc(hi3Ck71E, "hi3Ck71E", 1);
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

