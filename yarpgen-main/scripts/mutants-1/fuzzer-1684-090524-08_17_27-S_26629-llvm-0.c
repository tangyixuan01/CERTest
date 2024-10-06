#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

struct S
{
  unsigned f0 : 13;
  int f1 : 19;
  int f2 : 27;
  int f3 : 8;
} a;
int b;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int x2RAMkZn = 2147483647;
  short qtlzZiCN = (short)15665;
  short vuaSf5rW = (short)14180;
  short SwVPfvG7 = (short)-32768;
  struct S d = {4, 5, 10878, 1};
  for (; b < 7; b++)
  {
    int e = d.f1 | (d.f0 && (5 % d.f3));
    int f = c - d.f0;
    d.f2 = e;
    d.f0 = f;
    transparent_crc(e, "e", 1);
    transparent_crc(f, "f", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  a = d;
  transparent_crc(SwVPfvG7, "SwVPfvG7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  x2RAMkZn = ((~qtlzZiCN) % 1958) | ((-vuaSf5rW) / SwVPfvG7);
  transparent_crc(vuaSf5rW, "vuaSf5rW", 1);
  transparent_crc(qtlzZiCN, "qtlzZiCN", 1);
  transparent_crc(x2RAMkZn, "x2RAMkZn", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

