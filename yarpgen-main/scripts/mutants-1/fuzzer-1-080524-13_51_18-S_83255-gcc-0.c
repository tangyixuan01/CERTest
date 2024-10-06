#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int rx;
int in;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  unsigned gSThvKjr = 4294967295U;
  unsigned MA5mLU04 = 0U;
  short _iaTfE0W = (short)32767;
  const int tj = 3;
  int as[tj];
  static int l4;
  while (l4 < 1)
  {
    for (rx = 0; rx < tj; ++rx)
    {
      for (in = 0; in < tj; ++in)
      {
        as[in] = 1;
      }

      as[rx] = 0;
    }

    MA5mLU04 = (-gSThvKjr) * _iaTfE0W;
    ++l4;
  }

  transparent_crc(_iaTfE0W, "_iaTfE0W", 1);
  transparent_crc(MA5mLU04, "MA5mLU04", 1);
  transparent_crc(gSThvKjr, "gSThvKjr", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return as[tj - 1];
}

