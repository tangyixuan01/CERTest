#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  unsigned eKrl6g2z = 0U;
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
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

