#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

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
  char NJh3lTF4 = (signed char)-113;
  int ovbxCelN = -2147483648;
  int JRKCF_7P = 2147483647;
  unsigned u78erCUy = 4294967295U;
  short pQKCMRbZ = (short)-32768;
  transparent_crc(pQKCMRbZ, "pQKCMRbZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; JRKCF_7P < 2; JRKCF_7P++)
  {
    int f = (~u78erCUy) / 7;
    if (f)
      NJh3lTF4 = (u78erCUy = ~(ovbxCelN && pQKCMRbZ));
    while (u78erCUy < 94)
      u78erCUy++;

  }

  transparent_crc(u78erCUy, "u78erCUy", 1);
  transparent_crc(JRKCF_7P, "JRKCF_7P", 1);
  transparent_crc(ovbxCelN, "ovbxCelN", 1);
  transparent_crc(NJh3lTF4, "NJh3lTF4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (numDigits(0xffffffffffffffffUL) != 20)
  {
    __builtin_abort();
  }
}

