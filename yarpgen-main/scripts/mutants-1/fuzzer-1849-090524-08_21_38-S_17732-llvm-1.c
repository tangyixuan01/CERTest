#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

int printf(const char *, ...);
struct S0
{
  long f2;
  int f3;
  int f4;
  int f5;
};
struct S1
{
  char f0;
} a;
struct S2
{
  int f2;
  int f3;
  struct S0 f4;
  struct S1 f5;
} b;
int i;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int aOQXR_vi = 573892209;
  int pTqdH_OS = -870386665;
  int ejpqP90B = 2147483647;
  int YHJaLjKC = 2147483647;
  struct S2 c = {1, 1, {1, 1, 1, 1}, {1}};
  switch (ejpqP90B)
  {
    case 5:
      YHJaLjKC = 1;
      break;

    case 6:
      YHJaLjKC = 2;
      break;

    case 7:
      YHJaLjKC = 3;
      break;

  }

  b = c;
  i = c.f4.f5;
  a = b.f5;
  printf("%d\n", a.f0);
  switch (aOQXR_vi)
  {
    case 5:
      pTqdH_OS = 1;
      break;

    case 6:
      pTqdH_OS = 2;
      break;

    case 7:
      pTqdH_OS = 3;
      break;

  }

  transparent_crc(YHJaLjKC, "YHJaLjKC", 1);
  transparent_crc(ejpqP90B, "ejpqP90B", 1);
  transparent_crc(pTqdH_OS, "pTqdH_OS", 1);
  transparent_crc(aOQXR_vi, "aOQXR_vi", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

