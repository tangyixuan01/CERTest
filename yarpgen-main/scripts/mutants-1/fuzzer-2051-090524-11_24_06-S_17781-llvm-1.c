#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-if-snippet

int printf(const char *, ...);
struct S0
{
  int f0;
  int f1;
  int f2;
  int f3;
  int f4;
} b = {0, 0, 1, 0, 0};
int a;
void foo(struct S0 p)
{
  unsigned int Qbh96RaB = 0U;
  unsigned int xDJV3zre = 4294967295U;
  unsigned char TYeE7u23 = (unsigned char)252;
  b.f2 = 0;
  transparent_crc(TYeE7u23, "TYeE7u23", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (TYeE7u23)
  {
    xDJV3zre = Qbh96RaB;
  }
  transparent_crc(xDJV3zre, "xDJV3zre", 1);
  transparent_crc(Qbh96RaB, "Qbh96RaB", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (p.f2)
  {
    a = 1;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int KAQpLOCJ = -293529198;
  foo(b);
  printf("%d\n", a);
  KAQpLOCJ = !1;
  transparent_crc(KAQpLOCJ, "KAQpLOCJ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

