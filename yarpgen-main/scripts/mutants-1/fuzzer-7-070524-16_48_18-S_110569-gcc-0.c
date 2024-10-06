#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *format, ...);
short a = 1;
unsigned int b[1][2][16][4];
signed char d[1][2][16][4];
unsigned int res;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int PQ9GduA4 = -1144965066;
  int jTX81S9u = 920984161;
  int Re2lnjgP = 2147483647;
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
      PQ9GduA4 = (jTX81S9u ^ Re2lnjgP) ? (jTX81S9u) : (jTX81S9u - Re2lnjgP);
      res = (1 < ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]))) ? (1) : ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]));
    }

  }

  transparent_crc(Re2lnjgP, "Re2lnjgP", 1);
  transparent_crc(jTX81S9u, "jTX81S9u", 1);
  transparent_crc(PQ9GduA4, "PQ9GduA4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", res);
}

