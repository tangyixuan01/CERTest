#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

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
  int  txSWA1D0 = -570709324;
  int * EAKYjeqo = &txSWA1D0;
  unsigned char FNQW0OPr = (unsigned char)0;
  switch (FNQW0OPr)
  {
    case 0x95:
      *EAKYjeqo = FNQW0OPr - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *EAKYjeqo = FNQW0OPr - 0x80;
      break;

    default:
      *EAKYjeqo = 0;
      break;

  }

  transparent_crc(FNQW0OPr, "FNQW0OPr", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (numDigits(0xffffffffffffffffUL) != 20)
  {
    __builtin_abort();
  }
}

