#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

int printf(const char *, ...);
struct S
{
  int f0;
  int : 1;
  int f1 : 8;
  int f2;
} a;
int b;
void foo(int p)
{
  char XEtydKAx = (signed char)-15;
  int e0vyRbSN = -2147483648;
  int to2PCLDX = -2147483648;
  int mRXvFj6B = -1447006111;
  struct S c = a;
  switch (to2PCLDX)
  {
    XEtydKAx = ~e0vyRbSN;
    case 5:
      mRXvFj6B = 1;
      break;

    case 6:
      mRXvFj6B = 2;
      break;

    case 7:
      mRXvFj6B = 3;
      break;

  }

  c.f1 = p & 190;
  transparent_crc(mRXvFj6B, "mRXvFj6B", 1);
  transparent_crc(to2PCLDX, "to2PCLDX", 1);
  transparent_crc(e0vyRbSN, "e0vyRbSN", 1);
  transparent_crc(XEtydKAx, "XEtydKAx", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  b = c.f1 < 1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  foo(174);
  printf("%d\n", b);
  return 0;
}

