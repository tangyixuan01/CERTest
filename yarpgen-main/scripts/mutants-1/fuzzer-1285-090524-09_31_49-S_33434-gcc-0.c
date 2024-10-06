#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int k;
void f1(int a, int b)
{
  if (a)
  {
    while (b--)
    {
      k = 1;
    }

  }
  else
  {
    if (b != 1)
    {
      __builtin_abort();
    }
  }
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int piwPdIGX = 1304364916;
  int P7DXG_Nq = -1859341903;
  f1(1, 1);
  if (k != 1)
  {
    switch (piwPdIGX)
    {
      case 5:
        P7DXG_Nq = 1;
        break;

      case 6:
        P7DXG_Nq = 2;
        break;

      case 7:
        P7DXG_Nq = 3;
        break;

    }

    __builtin_abort();
  }
  transparent_crc(P7DXG_Nq, "P7DXG_Nq", 1);
  transparent_crc(piwPdIGX, "piwPdIGX", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

