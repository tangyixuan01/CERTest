#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

int printf(const char *format, ...);
short a = 1;
unsigned int b[1][2][16][4];
signed char d[1][2][16][4];
unsigned int res;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int8_t GR4tmzx9 = (signed char)127;
  int32_t  B6V_adcH = 1514995894;
  int32_t * XB2l470k = &B6V_adcH;
  int32_t ** _LMt2fcW = &XB2l470k;
  int32_t *** StZWFGlE = &_LMt2fcW;
  int  JanoA0lN = 2147483647;
  int * Bm3jT7ZE = &JanoA0lN;
  unsigned char _mGTNlqV = (unsigned char)39;
  for (int i = 0; i < 16; ++i)
  {
    for (int j = 2; j < 4; ++j)
    {
      d[0][1][i][j] = (signed char) (-47);
    }

  }

  for (signed char i = 0; i < 16; i += 4)
  {
    for (signed char j = 2; j < 10; j += 4)
    {
      for (; GR4tmzx9 < 4; GR4tmzx9++)
        *(*(*StZWFGlE)) = 1;

      res = (1 < ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]))) ? (1) : ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]));
    }

    switch (_mGTNlqV)
    {
      case 0x95:
        *Bm3jT7ZE = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *Bm3jT7ZE = 0x00;
        break;

      default:
        *Bm3jT7ZE = 0x05;
        break;

    }

  }

  transparent_crc(_mGTNlqV, "_mGTNlqV", 1);
  transparent_crc(GR4tmzx9, "GR4tmzx9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", res);
}

