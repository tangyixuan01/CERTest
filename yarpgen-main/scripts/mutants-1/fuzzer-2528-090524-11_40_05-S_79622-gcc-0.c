#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int bf;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  WoKyfQBR = -876520184;
  int * lW8KJD14 = &WoKyfQBR;
  unsigned char mHCDxQ4c = (unsigned char)0;
  int dc[5];
  for (bf = 0; bf < 2; ++bf)
  {
    int l9;
    int g5 = -1;
    for (l9 = 0; l9 < 5; ++l9)
    {
      dc[l9] = g5;
      g5 = dc[l9] > 0;
    }

    transparent_crc(g5, "g5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  if (dc[0] != (-1))
  {
    __builtin_abort();
    switch (mHCDxQ4c)
    {
      case 0x95:
        *lW8KJD14 = mHCDxQ4c - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *lW8KJD14 = mHCDxQ4c - 0x80;
        break;

      default:
        *lW8KJD14 = 0;
        break;

    }

  }
  transparent_crc(mHCDxQ4c, "mHCDxQ4c", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

