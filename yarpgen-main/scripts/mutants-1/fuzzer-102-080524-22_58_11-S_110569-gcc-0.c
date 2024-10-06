#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *format, ...);
short a = 1;
unsigned int b[1][2][16][4];
signed char d[1][2][16][4];
unsigned int res;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  vnqsFApE = 133969178;
  int * qnIv56c_ = &vnqsFApE;
  unsigned char K9Cgwqb_ = (unsigned char)151;
  for (int i = 0; i < 16; ++i)
  {
    switch (K9Cgwqb_)
    {
      case 0x95:
        *qnIv56c_ = K9Cgwqb_ - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *qnIv56c_ = K9Cgwqb_ - 0x80;
        break;

      default:
        *qnIv56c_ = 0;
        break;

    }

    for (int j = 2; j < 4; ++j)
    {
      d[0][1][i][j] = (signed char) (-47);
    }

  }

  for (signed char i = 0; i < 16; i += 4)
  {
    for (signed char j = 2; j < 10; j += 4)
    {
      res = (1 < ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]))) ? (1) : ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]));
    }

  }

  transparent_crc(K9Cgwqb_, "K9Cgwqb_", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", res);
}

