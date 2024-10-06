#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet -> insert-switch-snippet

int a;
int b;
int c[1];
int d[2];
int *e = c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  r8bTBa_1 = 298383444;
  int * r92RS1T6 = &r8bTBa_1;
  unsigned char pn9lMKW3 = (unsigned char)168;
  int  Z6f1XHwu = 2147483647;
  int * OaD0ZCSd = &Z6f1XHwu;
  unsigned char l3vLRdTz = (unsigned char)226;
  int Z7kPNda4 = -2147483648;
  int f = 0;
  for (; b < 2; b++)
  {
    int g;
    if (f)
    {
      while (Z7kPNda4 > (-1))
        ;

      b = 40;
    }
    a = d[b * b];
    for (f = 0; f < 3; f++)
    {
      if (e)
      {
        switch (pn9lMKW3)
        {
          case 0x95:
            *r92RS1T6 = pn9lMKW3 - 0x91;
            break;

          case 0x80:

          case 0x81:

          case 0x82:
            *r92RS1T6 = pn9lMKW3 - 0x80;
            break;

          default:
            *r92RS1T6 = 0;
            break;

        }

        switch (l3vLRdTz)
        {
          case 0x95:
            *OaD0ZCSd = 0x01;
            break;

          case 0x80:

          case 0x81:

          case 0x82:
            *OaD0ZCSd = 0x00;
            break;

          default:
            *OaD0ZCSd = 0x05;
            break;

        }

        break;
      }
      g--;
      if (a)
      {
        a = g;
      }
    }

  }

  transparent_crc(Z7kPNda4, "Z7kPNda4", 1);
  transparent_crc(l3vLRdTz, "l3vLRdTz", 1);
  transparent_crc(pn9lMKW3, "pn9lMKW3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

