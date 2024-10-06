#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

short a = -1;
int b;
char c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int _hTIXOmD = -2147483648;
  int NCliLtpB = 2147483647;
  char ytAvJn0e = (signed char)127;
  int  q3Ls_wj6 = 2147483647;
  int * OxcXQBzv = &q3Ls_wj6;
  unsigned char yzOPZS1u = (unsigned char)171;
  c = a;
  switch (yzOPZS1u)
  {
    case 0x95:
      *OxcXQBzv = yzOPZS1u - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *OxcXQBzv = yzOPZS1u - 0x80;
      break;

    default:
      *OxcXQBzv = 0;
      break;

  }

  b = a | c;
  if (b != (-1))
  {
    for (ytAvJn0e = 0; ytAvJn0e < 20; ytAvJn0e++)
      _hTIXOmD ^= NCliLtpB;

    __builtin_abort();
  }
  transparent_crc(yzOPZS1u, "yzOPZS1u", 1);
  transparent_crc(ytAvJn0e, "ytAvJn0e", 1);
  transparent_crc(NCliLtpB, "NCliLtpB", 1);
  transparent_crc(_hTIXOmD, "_hTIXOmD", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

