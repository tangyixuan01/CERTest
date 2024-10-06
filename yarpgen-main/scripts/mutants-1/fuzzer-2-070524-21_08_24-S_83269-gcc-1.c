#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  _SBcFGLl = -2147483648;
  int * tEGolK6T = &_SBcFGLl;
  unsigned char B36DhMaw = (unsigned char)255;
  char  nmSojsIR = (signed char)-128;
  char * HSQP7IRD = &nmSojsIR;
  int tMrimy_7 = -544247291;
  volatile unsigned char a = 1;
  long b = 0x80000000L;
  int c = -(((int) (-b)) - ((-0x7FFFFFFF) * a));
  if (c != 1)
  {
    __builtin_abort();
    tMrimy_7 |= 2 | ((*HSQP7IRD) < 0);
    switch (B36DhMaw)
    {
      case 0x95:
        *tEGolK6T = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *tEGolK6T = 0x00;
        break;

      default:
        *tEGolK6T = 0x05;
        break;

    }

  }
  transparent_crc(tMrimy_7, "tMrimy_7", 1);
  transparent_crc(B36DhMaw, "B36DhMaw", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

