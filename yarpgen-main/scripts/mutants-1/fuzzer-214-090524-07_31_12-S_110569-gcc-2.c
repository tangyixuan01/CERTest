#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet -> insert-switch-snippet

int printf(const char *format, ...);
short a = 1;
unsigned int b[1][2][16][4];
signed char d[1][2][16][4];
unsigned int res;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  aeLJFvRm = -1261954682;
  int * V6sxZEaP = &aeLJFvRm;
  unsigned char URLOKkvF = (unsigned char)255;
  int AXTmWEM1 = -2147483648;
  int qgjUlhYD = -2147483648;
  int bFXSHZdk = -1552436627;
  for (int i = 0; i < 16; ++i)
  {
    while (AXTmWEM1 > 1)
      ;

    for (int j = 2; j < 4; ++j)
    {
      d[0][1][i][j] = (signed char) (-47);
    }

  }

  switch (qgjUlhYD)
  {
    case 5:
      bFXSHZdk = 1;
      break;

    case 6:
      bFXSHZdk = 2;
      break;

    case 7:
      bFXSHZdk = 3;
      break;

    switch (URLOKkvF)
    {
      case 0x95:
        *V6sxZEaP = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *V6sxZEaP = 0x00;
        break;

      default:
        *V6sxZEaP = 0x05;
        break;

    }

  }

  for (signed char i = 0; i < 16; i += 4)
  {
    for (signed char j = 2; j < 10; j += 4)
    {
      res = (1 < ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]))) ? (1) : ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]));
    }

  }

  transparent_crc(bFXSHZdk, "bFXSHZdk", 1);
  transparent_crc(qgjUlhYD, "qgjUlhYD", 1);
  transparent_crc(AXTmWEM1, "AXTmWEM1", 1);
  transparent_crc(URLOKkvF, "URLOKkvF", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", res);
}

