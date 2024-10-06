#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
#pragma pack(1)
struct S0
{
  int : 8;
  int f1 : 31;
  int f2 : 1;
};
struct S0 a = {};
void fn1(struct S0 p2)
{
}

void fn2()
{
  int wV3_bZah = 1769035011;
  int ISHyNd2r = -665516123;
  int ZH8K37xM = 2147483647;
  while (ISHyNd2r > 6)
  {
    int n;
    if (wV3_bZah)
      break;
    ZH8K37xM = 1;
  }

  transparent_crc(ZH8K37xM, "ZH8K37xM", 1);
  transparent_crc(ISHyNd2r, "ISHyNd2r", 1);
  transparent_crc(wV3_bZah, "wV3_bZah", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  fn1(a);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  (a.f2 = 1) | (a.f1 = 0);
  printf("%d\n", a.f2);
  return 0;
}

