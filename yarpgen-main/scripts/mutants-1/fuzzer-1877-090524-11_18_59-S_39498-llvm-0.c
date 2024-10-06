#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int O8ZKMBTh = 1353662425;
  int R0iZzqW9 = -566350447;
  int e = 7;
  while (1)
  {
    int f = 2;
    int g = 1;
    int h = 126;
    int *i = &h;
    (&a) == i;
    L1:
    L2:
    if (!h)
    {
      goto L1;
    }


    if (!f)
    {
      c = (g << h) || (c << 3);
      goto L2;
    }
    b = e;
    f = (h = (e = g));
    g = b;
    if (b)
    {
      break;
    }
    O8ZKMBTh = (R0iZzqW9 ^= 1);
    goto L2;
    transparent_crc(f, "f", 1);
    transparent_crc(g, "g", 1);
    transparent_crc(h, "h", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  transparent_crc(R0iZzqW9, "R0iZzqW9", 1);
  transparent_crc(O8ZKMBTh, "O8ZKMBTh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

