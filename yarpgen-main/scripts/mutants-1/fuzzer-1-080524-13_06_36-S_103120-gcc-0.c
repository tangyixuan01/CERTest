#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int numDigits(long unsigned int value)
{
  unsigned short oUh09HX7 = (unsigned short)65535;
  int xAcBVXgE = 2147483647;
  unsigned short MZrV0zGw = (unsigned short)0;
  int n = 1;
  while (value > 0xffffffffU)
  {
    n += 4;
    value /= ((10 * 10) * 10) * 10;
  }

  unsigned int v = (unsigned int) value;
  transparent_crc(MZrV0zGw, "MZrV0zGw", 1);
  transparent_crc(xAcBVXgE, "xAcBVXgE", 1);
  transparent_crc(oUh09HX7, "oUh09HX7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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
      if (oUh09HX7 + (MZrV0zGw * (~(0 != 5))))
        xAcBVXgE = (-(~(MZrV0zGw * (~(0 != 5))))) + 2147483647;
    }
    n += 4;
    v /= ((10 * 10) * 10) * 10;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  if (numDigits(0xffffffffffffffffUL) != 20)
  {
    __builtin_abort();
  }
}

