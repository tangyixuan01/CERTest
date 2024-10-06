#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a;
int b;
int c[2][8];
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned char aHuMLte7 = (unsigned char)255;
  for (a = 0; a < 8; a++)
  {
    for (b = 0; b < 2; b++)
    {
      c[b][a] = c[b][b + 6] ^ 1;
    }

  }

  if (c[0][7] != 0)
  {
    __builtin_abort();
    while ((unsigned char) ((aHuMLte7--) * 6))
      ;

  }
  transparent_crc(aHuMLte7, "aHuMLte7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

