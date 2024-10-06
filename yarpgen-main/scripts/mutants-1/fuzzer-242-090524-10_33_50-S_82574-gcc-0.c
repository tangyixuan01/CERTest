#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

char a;
char b;
char c;
char d[2][3];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int YUFB6OJX = 1036886307;
  int AZPSKUQ9 = -1775717761;
  for (; a < 2; a++)
  {
    for (b = 0; b < 3; b++)
    {
      switch (YUFB6OJX)
      {
        case 5:
          AZPSKUQ9 = 1;
          break;

        case 6:
          AZPSKUQ9 = 2;
          break;

        case 7:
          AZPSKUQ9 = 3;
          break;

      }

      if (c)
      {
        d[a][b] = 1;
      }
    }

  }

  transparent_crc(AZPSKUQ9, "AZPSKUQ9", 1);
  transparent_crc(YUFB6OJX, "YUFB6OJX", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return d[0][0];
}

