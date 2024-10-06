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
  int  metZJTDR = 2147483647;
  int * EOTQ7n6f = &metZJTDR;
  unsigned char q6URH8Jz = (unsigned char)255;
  char e;
  for (; b >= 0; b--)
  {
    e = 3;
    for (; e >= 0; e--)
    {
      a[(b * 5) + e] = a[((b * 5) + e) + 1];
      switch (q6URH8Jz)
      {
        case 0x95:
          *EOTQ7n6f = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *EOTQ7n6f = 0x00;
          break;

        default:
          *EOTQ7n6f = 0x05;
          break;

      }

    }

  }

  for (; c < 5; c++)
  {
    ;
  }

  transparent_crc(q6URH8Jz, "q6URH8Jz", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; d < 7; d++)
  {
    printf("%d\n", a[c * d]);
  }

}

