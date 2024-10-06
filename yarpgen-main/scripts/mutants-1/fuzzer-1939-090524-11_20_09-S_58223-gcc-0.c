#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int printf(const char *, ...);
int a[2];
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  long sMipf0Wn = -737012737745833839LL;
  int SfU4OB7v = 1748787793;
  int  e7yzFG1N = 1699738007;
  int * fp8d_OyP = &e7yzFG1N;
  for (b = 0; b < 2; b++)
  {
    a[0] = 1;
    a[b] = 0;
    if (sMipf0Wn)
      fp8d_OyP = &SfU4OB7v;
  }

  printf("%d\n", a[0]);
  transparent_crc(SfU4OB7v, "SfU4OB7v", 1);
  transparent_crc(sMipf0Wn, "sMipf0Wn", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

