#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-if-snippet -> insert-assignment-snippet

int a;
int b;
int c = -1;
void f(int e)
{
  char  _19qb4H5 = (signed char)-128;
  char * P8p6Bsu7 = &_19qb4H5;
  volatile char Oob9ciAG = (signed char)1;
  int * WLv8XSkw = &c;
  Oob9ciAG = *P8p6Bsu7;
  unsigned char eI6KbUwY = (unsigned char)22;
  transparent_crc(eI6KbUwY, "eI6KbUwY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (eI6KbUwY)
  {
    case 0x95:
      *WLv8XSkw = eI6KbUwY - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *WLv8XSkw = eI6KbUwY - 0x80;
      break;

    default:
      *WLv8XSkw = 0;
      break;

  }

  transparent_crc(Oob9ciAG, "Oob9ciAG", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  b = (b % (~(c * e))) * e;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  short MphTJHZG = (short)-32768;
  int X7mk05qd = 2147483647;
  char fn7D2rGJ = (signed char)127;
  char ievKMGT2 = (signed char)69;
  if (ievKMGT2)
    X7mk05qd = MphTJHZG | fn7D2rGJ;
  f(0 || a);
  transparent_crc(ievKMGT2, "ievKMGT2", 1);
  transparent_crc(fn7D2rGJ, "fn7D2rGJ", 1);
  transparent_crc(X7mk05qd, "X7mk05qd", 1);
  transparent_crc(MphTJHZG, "MphTJHZG", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

