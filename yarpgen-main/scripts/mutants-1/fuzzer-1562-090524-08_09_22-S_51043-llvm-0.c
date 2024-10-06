#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a = 1;
int b = 1;
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned UBRe0co7 = 0U;
  int IeQR_rDv = -2147483648;
  int yiPCYNUQ = -2147483648;
  short d;
  short g;
  short i;
  int e = 34000;
  int h;
  d = b;
  g = 100 | b;
  L1:
  i = g;

  L2:
  g = ~(d / e);

  e = ~((2 / g) & d);
  h = a;
  while (!e)
  {
    a = b;
    e = ~(1L << i);
  }

  if (g > 0)
  {
    goto L2;
  }
  if (!g)
  {
    goto L1;
  }
  if (h < e)
  {
    __builtin_abort();
    yiPCYNUQ = ~(UBRe0co7 % IeQR_rDv);
  }
  transparent_crc(yiPCYNUQ, "yiPCYNUQ", 1);
  transparent_crc(IeQR_rDv, "IeQR_rDv", 1);
  transparent_crc(UBRe0co7, "UBRe0co7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

