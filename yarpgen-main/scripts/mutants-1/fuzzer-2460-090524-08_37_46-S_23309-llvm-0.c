#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a;
int b;
int c;
int e;
int f;
int fn1()
{
  short giGeDoTB = (short)6372;
  long p0O8eUI9 = -6734886517183239693LL;
  int eH5uyizM = -2147483648;
  long v0JguWap = -9101647359542742115LL;
  int g;
  char i;
  for (; b < 1; b++)
  {
    c = 0;
    e = f || (a + 1);
    i = 1 - c;
    g = ((-3) - i) - e;
    while (1)
    {
      int h = -1;
      L2:
      {
        int j = 0;
        L1:
        p0O8eUI9 = giGeDoTB ^ (h | (j & v0JguWap));

        eH5uyizM = eH5uyizM / (~(3 | (~p0O8eUI9)));
        if (p0O8eUI9)
          break;
      }

      h = 0;
    }

    if (g & 1)
    {
      return 0;
    }
  }

  transparent_crc(v0JguWap, "v0JguWap", 1);
  transparent_crc(eH5uyizM, "eH5uyizM", 1);
  transparent_crc(p0O8eUI9, "p0O8eUI9", 1);
  transparent_crc(giGeDoTB, "giGeDoTB", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  if (b)
  {
    __builtin_abort();
  }
  return 0;
}

