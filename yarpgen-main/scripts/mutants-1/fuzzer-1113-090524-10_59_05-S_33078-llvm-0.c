#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

unsigned b;
int c;
int d;
short e(int f, int g)
{
  return f * g;
}

char h(int f)
{
  return f;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  short BNFS6Yw9 = (short)-32768;
  int LROBm8Jz = -2147483648;
  short a = e(!c, 65535);
  b = (d = h(a <= (-1)));
  if (b != 1)
  {
    LROBm8Jz = ~(1L << BNFS6Yw9);
    __builtin_abort();
  }
  transparent_crc(LROBm8Jz, "LROBm8Jz", 1);
  transparent_crc(BNFS6Yw9, "BNFS6Yw9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

