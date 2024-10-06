#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

signed char foo(unsigned char c2)
{
  int  rzUshK8R = 2137189835;
  int * j3CfrHZp = &rzUshK8R;
  unsigned char oItvsKSE = (unsigned char)253;
  signed char c2_22;
  if ((c2 <= 63) || (c2 == 127))
  {
    goto bb43;
  }
  else
  {
    goto bb20;
  }
  bb20:
  if (c2 > 252)
  {
    goto bb43;
  }
  else
  {
    goto bb21;
  }

  bb21:
  ;

  bb24:
  c2_22 = (signed char) c2;

  if (c2_22 >= 0)
  {
    switch (oItvsKSE)
    {
      case 0x95:
        *j3CfrHZp = oItvsKSE - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *j3CfrHZp = oItvsKSE - 0x80;
        break;

      default:
        *j3CfrHZp = 0;
        break;

    }

    goto bb25;
  }
  else
  {
    goto bb26;
  }
  bb25:
  c2 = (unsigned char) (c2_22 - 64);

  goto bb27;
  bb26:
  c2 = (unsigned char) (c2_22 - 65);

  bb27:
  if (c2 <= 93)
  {
    goto bb28;
  }
  else
  {
    goto bb29;
  }

  bb28:
  c2 = c2 + 33;

  goto bb30;
  bb29:
  c2 = (unsigned char) (((signed char) c2) - 61);

  bb30:
  return c2;

  transparent_crc(oItvsKSE, "oItvsKSE", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  bb43:
  return -1;

}

extern void abort(void);
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  dfPKvroX = 2147483647;
  int * efivVx57 = &dfPKvroX;
  unsigned char UH7thJaN = (unsigned char)61;
  signed char res[256] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, -1, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, -1, -1, -1};
  unsigned int c;
  for (c = 0; c <= 255; ++c)
  {
    if (foo(c) != res[c])
    {
      abort();
      switch (UH7thJaN)
      {
        case 0x95:
          *efivVx57 = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *efivVx57 = 0x00;
          break;

        default:
          *efivVx57 = 0x05;
          break;

      }

    }
  }

  transparent_crc(UH7thJaN, "UH7thJaN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

