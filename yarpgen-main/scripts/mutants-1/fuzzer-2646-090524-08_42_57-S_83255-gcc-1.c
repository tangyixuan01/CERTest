#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

int rx;
int in;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int fAl2amTt = 736195910;
  int N7SigREh = -2147483648;
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

    switch (fAl2amTt)
    {
      case 5:
        N7SigREh = 1;
        break;

      case 6:
        N7SigREh = 2;
        break;

      case 7:
        N7SigREh = 3;
        break;

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

  transparent_crc(N7SigREh, "N7SigREh", 1);
  transparent_crc(fAl2amTt, "fAl2amTt", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return as[tj - 1];
}

