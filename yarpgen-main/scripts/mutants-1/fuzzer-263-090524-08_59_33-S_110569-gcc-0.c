#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *format, ...);
short a = 1;
unsigned int b[1][2][16][4];
signed char d[1][2][16][4];
unsigned int res;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int K4voDQU9 = 1372141152;
  int JB0nwxAY = 2147483647;
  for (int i = 0; i < 16; ++i)
  {
    for (int j = 2; j < 4; ++j)
    {
      d[0][1][i][j] = (signed char) (-47);
    }

  }

  for (signed char i = 0; i < 16; i += 4)
  {
    for (signed char j = 2; j < 10; j += 4)
    {
      res = (1 < ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]))) ? (1) : ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]));
      switch (K4voDQU9)
      {
        case 5:
          JB0nwxAY = 1;
          break;

        case 6:
          JB0nwxAY = 2;
          break;

        case 7:
          JB0nwxAY = 3;
          break;

      }

    }

  }

  transparent_crc(JB0nwxAY, "JB0nwxAY", 1);
  transparent_crc(K4voDQU9, "K4voDQU9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", res);
}

