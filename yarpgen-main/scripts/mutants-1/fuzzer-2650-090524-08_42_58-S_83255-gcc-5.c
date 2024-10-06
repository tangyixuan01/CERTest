#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet -> insert-switch-snippet -> insert-if-snippet -> insert-assignment-snippet -> insert-if-snippet

int rx;
int in;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  unsigned char NAVy3j7K = (unsigned char)255;
  short vk6PGrSZ = (short)-32768;
  int QkjECZS3 = -1700535031;
  char rt8gvMPs = (signed char)-128;
  unsigned char nCNhpscm = (unsigned char)99;
  short LqWwCGE8 = (short)-32768;
  char LSV6hA0g = (signed char)-128;
  int  dCAOQp6y = -2147483648;
  int * pLVoj6Zg = &dCAOQp6y;
  unsigned char ay4zLX1C = (unsigned char)97;
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
    nCNhpscm = ~((~rt8gvMPs) | ((QkjECZS3 ^ nCNhpscm) && LqWwCGE8));
    for (rx = 0; rx < tj; ++rx)
    {
      switch (ay4zLX1C)
      {
        case 0x95:
          *pLVoj6Zg = ay4zLX1C - 0x91;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *pLVoj6Zg = ay4zLX1C - 0x80;
          break;

        default:
          *pLVoj6Zg = 0;
          break;

      }

      for (in = 0; in < tj; ++in)
      {
        as[in] = 1;
      }

      as[rx] = 0;
    }

    if ((NAVy3j7K < 240) && vk6PGrSZ)
      for (;;)
      ;

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

    if (LSV6hA0g)
      L:
    ;

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
  transparent_crc(ay4zLX1C, "ay4zLX1C", 1);
  transparent_crc(LSV6hA0g, "LSV6hA0g", 1);
  transparent_crc(LqWwCGE8, "LqWwCGE8", 1);
  transparent_crc(nCNhpscm, "nCNhpscm", 1);
  transparent_crc(rt8gvMPs, "rt8gvMPs", 1);
  transparent_crc(QkjECZS3, "QkjECZS3", 1);
  transparent_crc(vk6PGrSZ, "vk6PGrSZ", 1);
  transparent_crc(NAVy3j7K, "NAVy3j7K", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return as[tj - 1];
}

