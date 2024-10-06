#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int lzcnt(int x)
{
  int count = 0;
  while (x > 0)
  {
    count++;
    x = x >> 1;
  }

  return count;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int CEUw3rsz = 2147483647;
  int sRotGm9h = -2147483648;
  int x = 1;
  int y = lzcnt(x);
  switch (CEUw3rsz)
  {
    case 5:
      sRotGm9h = 1;
      break;

    case 6:
      sRotGm9h = 2;
      break;

    case 7:
      sRotGm9h = 3;
      break;

  }

  printf("count  = %d\n", y);
  transparent_crc(sRotGm9h, "sRotGm9h", 1);
  transparent_crc(CEUw3rsz, "CEUw3rsz", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

