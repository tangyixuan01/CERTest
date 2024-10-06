#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int rx;
int in;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  char UOjsBXDN = (signed char)18;
  int eNk3TK_J = 2147483647;
  const int tj = 3;
  int as[tj];
  static int l4;
  while (l4 < 1)
  {
    for (rx = 0; rx < tj; ++rx)
    {
      if (!UOjsBXDN)
        eNk3TK_J = 1;
      for (in = 0; in < tj; ++in)
      {
        as[in] = 1;
      }

      as[rx] = 0;
    }

    ++l4;
  }

  transparent_crc(eNk3TK_J, "eNk3TK_J", 1);
  transparent_crc(UOjsBXDN, "UOjsBXDN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return as[tj - 1];
}

