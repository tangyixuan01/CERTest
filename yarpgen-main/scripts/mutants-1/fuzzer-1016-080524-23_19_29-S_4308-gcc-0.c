#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

extern int printf(const char *s, ...);
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  Geo5P3Jm = 2147483647;
  int * OinxT_p4 = &Geo5P3Jm;
  unsigned char IuDsvkUc = (unsigned char)0;
  long long C = 1ULL << 63;
  long long X;
  int Y = 32;
  switch (IuDsvkUc)
  {
    case 0x95:
      *OinxT_p4 = IuDsvkUc - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *OinxT_p4 = IuDsvkUc - 0x80;
      break;

    default:
      *OinxT_p4 = 0;
      break;

  }

  X = C >> (Y & 31);
  printf("%s (%llx)\n", (X != C) ? ("FAIL") : ("OK"), X);
  transparent_crc(IuDsvkUc, "IuDsvkUc", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

