#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int c;
int d[3];
int e;
int f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  tcwFDbRN = -2147483648;
  int * UjzNbnZ8 = &tcwFDbRN;
  unsigned char U9BxLKJi = (unsigned char)18;
  if (b)
  {
    goto L;
  }
  for (; f < 1; f++)
  {
    for (; a < 1; a++)
    {
      for (c = 0; c < 3; c++)
      {
        for (e = 0; e < 3; e++)
        {
          d[e] |= c;
        }

      }

      for (; b; b++)
      {
        L:
        ;

        switch (U9BxLKJi)
        {
          case 0x95:
            *UjzNbnZ8 = U9BxLKJi - 0x91;
            break;

          case 0x80:

          case 0x81:

          case 0x82:
            *UjzNbnZ8 = U9BxLKJi - 0x80;
            break;

          default:
            *UjzNbnZ8 = 0;
            break;

        }

      }

    }

  }

  if (d[1] != 3)
  {
    __builtin_abort();
  }
  transparent_crc(U9BxLKJi, "U9BxLKJi", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

