#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int rx;
int in;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  ICDLQ0dX = -2147483648;
  int * CexVfGzu = &ICDLQ0dX;
  unsigned char S_k4xOvM = (unsigned char)243;
  const int tj = 3;
  int as[tj];
  static int l4;
  while (l4 < 1)
  {
    for (rx = 0; rx < tj; ++rx)
    {
      for (in = 0; in < tj; ++in)
      {
        as[in] = 1;
        switch (S_k4xOvM)
        {
          case 0x95:
            *CexVfGzu = S_k4xOvM - 0x91;
            break;

          case 0x80:

          case 0x81:

          case 0x82:
            *CexVfGzu = S_k4xOvM - 0x80;
            break;

          default:
            *CexVfGzu = 0;
            break;

        }

      }

      as[rx] = 0;
    }

    ++l4;
  }

  transparent_crc(S_k4xOvM, "S_k4xOvM", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return as[tj - 1];
}

