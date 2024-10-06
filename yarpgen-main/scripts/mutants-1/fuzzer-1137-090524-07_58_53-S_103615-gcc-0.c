#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int z = 5;
int a[6] = {0, 0, 0, 0, 0, 1};
int main()
{
  platform_main_begin();
  crc32_gentab();
  int Y3x8vgT0 = 307165458;
  int cAjWI1pd = 1590633914;
  for (int x = 5; x; x--)
  {
    for (int y = z; y >= x; y--)
    {
      a[y - x] += a[y];
    }

  }

  while (Y3x8vgT0 > 0)
  {
    cAjWI1pd++;
    Y3x8vgT0 = Y3x8vgT0 >> 1;
  }

  if (a[0] != 7)
  {
    __builtin_abort();
  }
  transparent_crc(cAjWI1pd, "cAjWI1pd", 1);
  transparent_crc(Y3x8vgT0, "Y3x8vgT0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

