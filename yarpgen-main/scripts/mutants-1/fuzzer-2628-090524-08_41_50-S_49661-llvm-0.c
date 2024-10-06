#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

static int *a[2][3][3];
static int b;
static int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned char giSxO9BD = (unsigned char)205;
  int x42qdsc3 = 2147483647;
  giSxO9BD = (-x42qdsc3) | 4;
  for (c = 0; c < 2; c++)
  {
    for (b = 0; b < 2; b++)
    {
      a[1][c][b] = a[0][0][0];
    }

  }

  transparent_crc(x42qdsc3, "x42qdsc3", 1);
  transparent_crc(giSxO9BD, "giSxO9BD", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

