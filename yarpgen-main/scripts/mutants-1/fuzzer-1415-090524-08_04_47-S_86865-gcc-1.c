#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-while-snippet

int xy;
int tb;
void bt(void)
{
  unsigned char PpNLEJVD = (unsigned char)6;
  for (xy = 0; xy >= 0; --xy)
  {
    int yt[8] = {0};
    int pz[2] = {0};
    int sa[32] = {0};
    int us;
    for (us = 0; us < 8; ++us)
    {
      yt[us] = 0;
    }

    (void) yt;
    (void) pz;
    (void) sa;
    for (int hash_i = 0; hash_i < 8; hash_i++)
    {
      transparent_crc(yt[hash_i], "yt[hash_i]", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
    }

    for (int hash_i = 0; hash_i < 2; hash_i++)
    {
      transparent_crc(pz[hash_i], "pz[hash_i]", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
    }

    for (int hash_i = 0; hash_i < 32; hash_i++)
    {
      transparent_crc(sa[hash_i], "sa[hash_i]", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
    }

  }

  while ((unsigned char) ((PpNLEJVD--) * 6))
    ;

  transparent_crc(PpNLEJVD, "PpNLEJVD", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  tb = 1;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  bt();
  if (xy != (-1))
  {
    for (int *p = (int []){1, 2, 3, 0}; *p; ++p)
    {
      printf("%d\n", *p);
    }

    __builtin_abort();
  }
  return 0;
}

