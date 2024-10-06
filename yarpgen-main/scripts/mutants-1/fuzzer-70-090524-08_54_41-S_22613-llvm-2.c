#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet -> insert-switch-snippet

int a;
int b;
int c;
int d;
int e;
char f[1][3];
void fn1()
{
  int  km1v5D2j = -2147483648;
  int * UYqPA4Sh = &km1v5D2j;
  unsigned char I57DsdmL = (unsigned char)0;
  int yZROJSC9 = -2147483648;
  int T8dkn3Qz = -2147483648;
  int OYqhvauJ = -674970763;
  int e7pG5gUE = 1876124698;
  transparent_crc(e7pG5gUE, "e7pG5gUE", 1);
  transparent_crc(OYqhvauJ, "OYqhvauJ", 1);
  transparent_crc(T8dkn3Qz, "T8dkn3Qz", 1);
  transparent_crc(yZROJSC9, "yZROJSC9", 1);
  transparent_crc(I57DsdmL, "I57DsdmL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (d = 0; d < 2; d++)
  {
    f[b][d] = 0;
    switch (I57DsdmL)
    {
      case 0x95:
        *UYqPA4Sh = I57DsdmL - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *UYqPA4Sh = I57DsdmL - 0x80;
        break;

      default:
        *UYqPA4Sh = 0;
        break;

    }

    for (e = 0; e < 3; e++)
    {
      if (c)
      {
        switch (OYqhvauJ)
        {
          case 5:
            e7pG5gUE = 1;
            break;

          case 6:
            e7pG5gUE = 2;
            break;

          case 7:
            e7pG5gUE = 3;
            break;

        }

        a--;
      }
      f[0][e] = 1;
      switch (yZROJSC9)
      {
        case 5:
          T8dkn3Qz = 1;
          break;

        case 6:
          T8dkn3Qz = 2;
          break;

        case 7:
          T8dkn3Qz = 3;
          break;

      }

    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  if (f[0][1] != 1)
  {
    __builtin_abort();
  }
  return 0;
}

