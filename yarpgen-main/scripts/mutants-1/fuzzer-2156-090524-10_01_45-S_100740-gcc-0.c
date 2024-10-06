#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

unsigned a;
unsigned b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int bPoKaRSI = -2147483648;
  int rYhkzo5D = 2147483647;
  unsigned c = 0;
  for (a = 0; a < 2; a++)
  {
    for (b = 0; b < 2; b++)
    {
      while (bPoKaRSI > rYhkzo5D)
      {
        rYhkzo5D *= 2;
      }

      if ((++c) < a)
      {
        __builtin_abort();
      }
    }

  }

  transparent_crc(rYhkzo5D, "rYhkzo5D", 1);
  transparent_crc(bPoKaRSI, "bPoKaRSI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

