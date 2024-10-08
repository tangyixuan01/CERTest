#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet

int numDigits(long unsigned int value)
{
  int n = 1;
  while (value > 0xffffffffU)
  {
    n += 4;
    value /= ((10 * 10) * 10) * 10;
  }

  unsigned int v = (unsigned int) value;
  while (1)
  {
    if (v < 10)
    {
      return n;
    }
    if (v < (10 * 10))
    {
      return n + 1;
    }
    if (v < ((10 * 10) * 10))
    {
      return n + 2;
    }
    if (v < (((10 * 10) * 10) * 10))
    {
      return n + 3;
    }
    n += 4;
    v /= ((10 * 10) * 10) * 10;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int if7aP39u = -2147483648;
  int JgN5QedI = -2147483648;
  int JWwBmjTP = -138690434;
  int DpizolV6 = 783204568;
  int OHlAa3Yj = 2147483647;
  while (JgN5QedI > 6)
  {
    int n;
    if (if7aP39u)
      break;
    JWwBmjTP = 1;
  }

  transparent_crc(OHlAa3Yj, "OHlAa3Yj", 1);
  transparent_crc(DpizolV6, "DpizolV6", 1);
  transparent_crc(JWwBmjTP, "JWwBmjTP", 1);
  transparent_crc(JgN5QedI, "JgN5QedI", 1);
  transparent_crc(if7aP39u, "if7aP39u", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (numDigits(0xffffffffffffffffUL) != 20)
  {
    __builtin_abort();
    switch (DpizolV6)
    {
      case 5:
        OHlAa3Yj = 1;
        break;

      case 6:
        OHlAa3Yj = 2;
        break;

      case 7:
        OHlAa3Yj = 3;
        break;

    }

  }
}

