#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int RjDKzGtL = 1599835106;
  int O9aEMA1u = -1204086294;
  volatile unsigned char a = 1;
  long b = 0x80000000L;
  int c = -(((int) (-b)) - ((-0x7FFFFFFF) * a));
  switch (RjDKzGtL)
  {
    case 5:
      O9aEMA1u = 1;
      break;

    case 6:
      O9aEMA1u = 2;
      break;

    case 7:
      O9aEMA1u = 3;
      break;

  }

  if (c != 1)
  {
    __builtin_abort();
  }
  transparent_crc(O9aEMA1u, "O9aEMA1u", 1);
  transparent_crc(RjDKzGtL, "RjDKzGtL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

