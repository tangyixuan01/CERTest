#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet

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
  int X0yRKMsp = -954124989;
  int yJ8IXbaN = 2147483647;
  int  Q2Vn3uCe = -558521320;
  int * Php2T4KD = &Q2Vn3uCe;
  unsigned char ZICF3nEd = (unsigned char)20;
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
          switch (ZICF3nEd)
          {
            case 0x95:
              *Php2T4KD = ZICF3nEd - 0x91;
              break;

            case 0x80:

            case 0x81:

            case 0x82:
              *Php2T4KD = ZICF3nEd - 0x80;
              break;

            default:
              *Php2T4KD = 0;
              break;

          }

          while (yJ8IXbaN && (1 <= X0yRKMsp))
            ;

          d[e] |= c;
        }

      }

      for (; b; b++)
      {
        L:
        ;

      }

    }

  }

  if (d[1] != 3)
  {
    __builtin_abort();
  }
  transparent_crc(ZICF3nEd, "ZICF3nEd", 1);
  transparent_crc(yJ8IXbaN, "yJ8IXbaN", 1);
  transparent_crc(X0yRKMsp, "X0yRKMsp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

