#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

static int a;
static int *b[10][9];
int main()
{
  platform_main_begin();
  crc32_gentab();
  long VJw6rl4k = -9223372036854775807LL;
  int lERt_5Jj = 366623608;
  while (VJw6rl4k > 0xffffffffU)
  {
    lERt_5Jj += 4;
    VJw6rl4k /= ((10 * 10) * 10) * 10;
  }

  for (a = 0; a < 9; a++)
  {
    b[5][a] = b[a + 1][4];
  }

  transparent_crc(lERt_5Jj, "lERt_5Jj", 1);
  transparent_crc(VJw6rl4k, "VJw6rl4k", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

