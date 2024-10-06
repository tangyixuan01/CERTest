#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-if-snippet

struct S
{
  int b;
  int c;
  int d;
} e = {20, 0, 0};
int f;
int g;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int f8GrLJmI = -640983743;
  int a8dRz6nN = 2147483647;
  unsigned eKrl6g2z = 0U;
  if (f8GrLJmI < 1)
    if (a8dRz6nN)
    f8GrLJmI = 0;
  unsigned tS05F8Km = 0U;
  short ZlC2LDhN = (short)-32768;
  struct S h = e;
  for (; f < 4; f++)
  {
    g = 0 % h.b;
    h.c = ~h.d;
    tS05F8Km = (-eKrl6g2z) * ZlC2LDhN;
    h.b = h.c;
  }

  transparent_crc(ZlC2LDhN, "ZlC2LDhN", 1);
  transparent_crc(tS05F8Km, "tS05F8Km", 1);
  transparent_crc(eKrl6g2z, "eKrl6g2z", 1);
  transparent_crc(a8dRz6nN, "a8dRz6nN", 1);
  transparent_crc(f8GrLJmI, "f8GrLJmI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

