#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

int printf(const char *, ...);
int g_50[] = {0, 0, 0, 0, 1, 0, 0};
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int ENLIQxt2 = -2147483648;
  int ben9o8hf = -2147483648;
  int  KR8royAD = 2022224952;
  int * SHjM3zAQ = &KR8royAD;
  unsigned char soBP_Xfk = (unsigned char)0;
  int i;
  for (i = 0; i <= 1; i++)
  {
    switch (ENLIQxt2)
    {
      case 5:
        ben9o8hf = 1;
        break;

      case 6:
        ben9o8hf = 2;
        break;

      case 7:
        ben9o8hf = 3;
        break;

    }

    g_50[i + 5] = g_50[i + 4];
  }

  for (i = 0; i < 7; i++)
  {
    printf("%d\n", g_50[i]);
  }

  transparent_crc(soBP_Xfk, "soBP_Xfk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (soBP_Xfk)
  {
    case 0x95:
      *SHjM3zAQ = soBP_Xfk - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *SHjM3zAQ = soBP_Xfk - 0x80;
      break;

    default:
      *SHjM3zAQ = 0;
      break;

  }

  transparent_crc(ben9o8hf, "ben9o8hf", 1);
  transparent_crc(ENLIQxt2, "ENLIQxt2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

