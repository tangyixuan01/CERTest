#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int rx;
int in;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  TDN1VP5d = 2147483647;
  int * lhSb8CHO = &TDN1VP5d;
  unsigned char UgZe9dVs = (unsigned char)0;
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

    ++l4;
  }

  transparent_crc(UgZe9dVs, "UgZe9dVs", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (UgZe9dVs)
  {
    case 0x95:
      *lhSb8CHO = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *lhSb8CHO = 0x00;
      break;

    default:
      *lhSb8CHO = 0x05;
      break;

  }

  return as[tj - 1];
}

