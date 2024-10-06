#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
char b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  pEfa2Idl = 432409176;
  int * Qje8_9XN = &pEfa2Idl;
  unsigned char WAu90Gvo = (unsigned char)166;
  char c = 0;
  for (; c != 3; c = c + 7)
  {
    a = b & a;
    if (a)
    {
      switch (WAu90Gvo)
      {
        case 0x95:
          *Qje8_9XN = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *Qje8_9XN = 0x00;
          break;

        default:
          *Qje8_9XN = 0x05;
          break;

      }

      break;
    }
  }

  transparent_crc(WAu90Gvo, "WAu90Gvo", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

