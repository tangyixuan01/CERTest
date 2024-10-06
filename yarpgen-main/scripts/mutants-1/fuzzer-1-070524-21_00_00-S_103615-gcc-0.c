#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int z = 5;
int a[6] = {0, 0, 0, 0, 0, 1};
int main()
{
  platform_main_begin();
  crc32_gentab();
  int GN0kQqbi = -8526398;
  int pYUZ5Qi3 = -2102564326;
  int iJw8aOIm = 1490922796;
  for (int x = 5; x; x--)
  {
    for (int y = z; y >= x; y--)
    {
      a[y - x] += a[y];
    }

  }

  if (a[0] != 7)
  {
    __builtin_abort();
  }
  transparent_crc(iJw8aOIm, "iJw8aOIm", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  iJw8aOIm = (-(pYUZ5Qi3 < 1)) * GN0kQqbi;
  transparent_crc(pYUZ5Qi3, "pYUZ5Qi3", 1);
  transparent_crc(GN0kQqbi, "GN0kQqbi", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

