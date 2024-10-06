#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int xy;
int tb;
void bt(void)
{
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

  tb = 1;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  long Ikohrz09 = 9223372036854775807LL;
  bt();
  if (xy != (-1))
  {
    __builtin_abort();
    while (Ikohrz09 != 0)
    {
      if (*((char *) Ikohrz09))
        break;
    }

  }
  transparent_crc(Ikohrz09, "Ikohrz09", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

