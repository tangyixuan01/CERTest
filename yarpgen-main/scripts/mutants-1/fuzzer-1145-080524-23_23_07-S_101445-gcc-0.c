#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a[35] = {1, 1, 3};
char b = 4;
int c;
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  PDhg2ltc = -2147483648;
  int * MjRKP1rY = &PDhg2ltc;
  unsigned char toJ4m_Fn = (unsigned char)255;
  char e;
  for (; b >= 0; b--)
  {
    e = 3;
    for (; e >= 0; e--)
    {
      a[(b * 5) + e] = a[((b * 5) + e) + 1];
    }

  }

  for (; c < 5; c++)
  {
    ;
  }

  transparent_crc(toJ4m_Fn, "toJ4m_Fn", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; d < 7; d++)
  {
    printf("%d\n", a[c * d]);
    switch (toJ4m_Fn)
    {
      case 0x95:
        *MjRKP1rY = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *MjRKP1rY = 0x00;
        break;

      default:
        *MjRKP1rY = 0x05;
        break;

    }

  }

}

