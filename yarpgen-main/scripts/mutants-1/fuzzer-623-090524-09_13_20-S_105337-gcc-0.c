#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int a;
int f()
{
  short NulbV6Jc = (short)32767;
  unsigned JbHPse_x = 4294967295U;
  int uFhobdQw = 2147483647;
  short cXOgB8xb = (short)-32768;
  int b;
  NulbV6Jc = ((~uFhobdQw) | ((~JbHPse_x) ^ ((~cXOgB8xb) + NulbV6Jc))) | 2;
  int c;
  for (b = 0; b < 3; b++)
  {
    if (!a)
    {
      break;
    }
    c--;
    printf("%d", c);
  }

  transparent_crc(cXOgB8xb, "cXOgB8xb", 1);
  transparent_crc(uFhobdQw, "uFhobdQw", 1);
  transparent_crc(JbHPse_x, "JbHPse_x", 1);
  transparent_crc(NulbV6Jc, "NulbV6Jc", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return b;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  if (f())
  {
    __builtin_abort();
  }
  return 0;
}

