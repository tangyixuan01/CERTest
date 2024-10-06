#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
short a;
short c;
int b;
int d;
int r;
static unsigned int foo()
{
  int  Na_F3Uo0 = -1105250517;
  int * ka6P5pTw = &Na_F3Uo0;
  unsigned char Y0xEQCya = (unsigned char)188;
  int e;
  b = 0;
  for (a = 0; a < 2; a++)
  {
    if (b != 1)
    {
      e = a - 7;
      c = e * 60694;
      r = c;
    }
    for (; d; d++)
    {
      ;
      switch (Y0xEQCya)
      {
        case 0x95:
          *ka6P5pTw = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *ka6P5pTw = 0x00;
          break;

        default:
          *ka6P5pTw = 0x05;
          break;

      }

    }

  }

  transparent_crc(Y0xEQCya, "Y0xEQCya", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  foo();
  printf("%d\n", r);
  return 0;
}

