#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet

int a;
int b;
int c;
int d = 1;
int e;
static signed char foo()
{
  int * dB8kGMKT = &d;
  unsigned char ew2WHGrj = (unsigned char)251;
  int C0LM5mW8 = -1543119168;
  int spKcOh8X = -2147483648;
  int * CB1SR2lN = &d;
  int ** dEeD7TAx = &CB1SR2lN;
  int *** JRqUH3eI = &dEeD7TAx;
  int **** s8Tw_idF = &JRqUH3eI;
  int ***** E0dpuCsN = &s8Tw_idF;
  int f;
  int g = a;
  for (f = 1; f < 3; f++)
  {
    for (; b < 1; b++)
    {
      if (d)
      {
        for (c = 0; c < 4; c++)
        {
          for (f = 0; f < 3; f++)
          {
            for (e = 0; e < 1; e++)
            {
              a = g;
            }

            if (f)
            {
              break;
            }
          }

        }

      }
      else
      {
        while (spKcOh8X)
          *(*(*(*E0dpuCsN))) = &C0LM5mW8;

        if (f)
        {
          continue;
        }
        switch (ew2WHGrj)
        {
          case 0x95:
            *dB8kGMKT = 0x01;
            break;

          case 0x80:

          case 0x81:

          case 0x82:
            *dB8kGMKT = 0x00;
            break;

          default:
            *dB8kGMKT = 0x05;
            break;

        }

      }
      return 0;
    }

  }

  transparent_crc(spKcOh8X, "spKcOh8X", 1);
  transparent_crc(C0LM5mW8, "C0LM5mW8", 1);
  transparent_crc(ew2WHGrj, "ew2WHGrj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  foo();
  return 0;
}

