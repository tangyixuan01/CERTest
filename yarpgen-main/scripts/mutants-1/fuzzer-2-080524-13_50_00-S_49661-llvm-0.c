#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

static int *a[2][3][3];
static int b;
static int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int qT3fgaBZ = 1928339103;
  int e9NQM0Ah = 2147483647;
  for (c = 0; c < 2; c++)
  {
    for (b = 0; b < 2; b++)
    {
      a[1][c][b] = a[0][0][0];
      switch (qT3fgaBZ)
      {
        case 5:
          e9NQM0Ah = 1;
          break;

        case 6:
          e9NQM0Ah = 2;
          break;

        case 7:
          e9NQM0Ah = 3;
          break;

      }

    }

  }

  transparent_crc(e9NQM0Ah, "e9NQM0Ah", 1);
  transparent_crc(qT3fgaBZ, "qT3fgaBZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

