#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-assignment-snippet

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
  int xug458ba = -1307460983;
  int IobuDvtp = 2147483647;
  double Ug6d7OxI = 1.7976931348623157e+308;
  xug458ba = ((IobuDvtp < 0) && (0 < ((-2147483647) - IobuDvtp))) ? (0) : (IobuDvtp);
  struct S2 c = {1, 1, {1, 1, 1, 1}, {1}};
  b = c;
  i = c.f4.f5;
  a = b.f5;
  printf("%d\n", a.f0);
  Ug6d7OxI = 1.0 / (1.0 + Ug6d7OxI);
  transparent_crc(Ug6d7OxI, "Ug6d7OxI", 1);
  transparent_crc(IobuDvtp, "IobuDvtp", 1);
  transparent_crc(xug458ba, "xug458ba", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

