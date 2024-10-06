#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet

int a;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  short HRdr6kg2 = (short)-32768;
  long lTNikU8J = -7212456390336772150LL;
  int ydPJsVtm = 396775713;
  long rDyN1G0j = 9223372036854775807LL;
  int  nrFy8d5h = 2147483647;
  int * uDW4NLqT = &nrFy8d5h;
  unsigned char ZemXr1NB = (unsigned char)255;
  int c = 0;
  long d;
  for (; b < 1; b++)
  {
    ((c && d) & 3) || a;
    switch (ZemXr1NB)
    {
      case 0x95:
        *uDW4NLqT = ZemXr1NB - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *uDW4NLqT = ZemXr1NB - 0x80;
        break;

      default:
        *uDW4NLqT = 0;
        break;

    }

    d = c;
    c = -1;
    if (d)
    {
      while (1)
      {
        int h = -1;
        L2:
        {
          int j = 0;
          L1:
          lTNikU8J = HRdr6kg2 ^ (h | (j & rDyN1G0j));

          ydPJsVtm = ydPJsVtm / (~(3 | (~lTNikU8J)));
          if (lTNikU8J)
            break;
        }

        h = 0;
      }

      __builtin_abort();
    }
  }

  transparent_crc(ZemXr1NB, "ZemXr1NB", 1);
  transparent_crc(rDyN1G0j, "rDyN1G0j", 1);
  transparent_crc(ydPJsVtm, "ydPJsVtm", 1);
  transparent_crc(lTNikU8J, "lTNikU8J", 1);
  transparent_crc(HRdr6kg2, "HRdr6kg2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

