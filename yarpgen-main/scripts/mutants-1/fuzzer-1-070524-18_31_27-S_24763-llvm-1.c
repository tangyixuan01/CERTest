#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet

char a = -1;
int b;
short fn1(int p1)
{
  return p1 >> 1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  BAdvY0J7 = -2147483648;
  int * cEDyzCg6 = &BAdvY0J7;
  unsigned char vr1hP7lm = (unsigned char)0;
  int Txd9tY34 = 2147483647;
  switch (vr1hP7lm)
  {
    case 0x95:
      *cEDyzCg6 = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *cEDyzCg6 = 0x00;
      break;

    default:
      *cEDyzCg6 = 0x05;
      break;

  }

  b = fn1(a);
  if (b != (-1))
  {
    __builtin_abort();
    if (Txd9tY34 & 1)
      Txd9tY34 = 0;
  }
  transparent_crc(Txd9tY34, "Txd9tY34", 1);
  transparent_crc(vr1hP7lm, "vr1hP7lm", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

