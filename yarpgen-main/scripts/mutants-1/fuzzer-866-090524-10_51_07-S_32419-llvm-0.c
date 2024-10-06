#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

unsigned short a;
int b;
int c;
short fn1(unsigned short e)
{
  return (e) ? (a % e) : (0);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int M5d0ktqo = 2147483647;
  int Y5WjOKa4 = -1482288935;
  for (c = -20; c; c++)
  {
    switch (M5d0ktqo)
    {
      case 5:
        Y5WjOKa4 = 1;
        break;

      case 6:
        Y5WjOKa4 = 2;
        break;

      case 7:
        Y5WjOKa4 = 3;
        break;

    }

    b |= fn1(c);
  }

  transparent_crc(Y5WjOKa4, "Y5WjOKa4", 1);
  transparent_crc(M5d0ktqo, "M5d0ktqo", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

