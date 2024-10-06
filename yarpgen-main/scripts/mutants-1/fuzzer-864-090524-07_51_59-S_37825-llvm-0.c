#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a[9][2];
int *b[10];
int **c = &b[5];
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int _8eBnbMS = 759092474;
  for (; d < 4; d++)
  {
    b[d + 5] = &a[d + 2][1];
  }

  *(*c) = 0;
  if ((_8eBnbMS != 2) == _8eBnbMS)
    __builtin_abort();
  transparent_crc(_8eBnbMS, "_8eBnbMS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

