#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a[36];
int b;
int c;
int d;
int e;
int f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int rvzEDjiP = -1618605351;
  int jn6fd1t7 = -787493709;
  for (c = 0; c < 6; c++)
  {
    for (d = 0; d < 6; d++)
    {
      for (b = 0; b < 6; b++)
      {
        a[6 + c] = a[(c * 6) + c] ^ 1;
      }

    }

  }

  if (a[7] != 0)
  {
    __builtin_abort();
  }
  transparent_crc(jn6fd1t7, "jn6fd1t7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (rvzEDjiP)
  {
    case 5:
      jn6fd1t7 = 1;
      break;

    case 6:
      jn6fd1t7 = 2;
      break;

    case 7:
      jn6fd1t7 = 3;
      break;

  }

  transparent_crc(rvzEDjiP, "rvzEDjiP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

