#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

struct S1
{
  int f0;
  int f2;
  int f3;
  int f6;
  char f8;
} a[1];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int IY1U59yg = 391941164;
  int T5Kqkl7S = 1062889115;
  int qtG97Pyk = -2147483648;
  int UsGkV6tW = -2147483648;
  struct S1 b[] = {1, 1, 1, 1, 1, 1, 1};
  for (; qtG97Pyk < 16; qtG97Pyk++)
  {
    T5Kqkl7S = qtG97Pyk;
    if (!qtG97Pyk)
      T5Kqkl7S = T5Kqkl7S / 2;
    IY1U59yg = T5Kqkl7S;
    UsGkV6tW = IY1U59yg;
  }

  b[0].f0 = 0;
  a[0] = b[1];
  transparent_crc(UsGkV6tW, "UsGkV6tW", 1);
  transparent_crc(qtG97Pyk, "qtG97Pyk", 1);
  transparent_crc(T5Kqkl7S, "T5Kqkl7S", 1);
  transparent_crc(IY1U59yg, "IY1U59yg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

