#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

char a = -1;
int b;
short fn1(int p1)
{
  int Pt5HeVj3 = 2147483647;
  long PV0eAEsm = -71041885651113561LL;
  signed uNDz4bWa = 1;
  long xZTMsveR = 9223372036854775807LL;
  PV0eAEsm = (Pt5HeVj3 = uNDz4bWa && xZTMsveR);
  transparent_crc(xZTMsveR, "xZTMsveR", 1);
  transparent_crc(uNDz4bWa, "uNDz4bWa", 1);
  transparent_crc(PV0eAEsm, "PV0eAEsm", 1);
  transparent_crc(Pt5HeVj3, "Pt5HeVj3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p1 >> 1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  b = fn1(a);
  if (b != (-1))
  {
    __builtin_abort();
  }
  return 0;
}

