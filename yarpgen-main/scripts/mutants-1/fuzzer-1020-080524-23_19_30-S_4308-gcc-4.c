#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet -> insert-for-snippet -> insert-switch-snippet -> insert-switch-snippet

extern int printf(const char *s, ...);
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  V0yemvcW = -152668616;
  int * yiptnCMY = &V0yemvcW;
  unsigned char _zHLJEZg = (unsigned char)255;
  int  FESvw4Lc = 2147483647;
  int * ytVzW1jN = &FESvw4Lc;
  unsigned char kuPE0jzX = (unsigned char)0;
  int _j4HMEAV = 872228264;
  for (_j4HMEAV = 0; _j4HMEAV;)
    ;

  int  cwOMFu7I = 1394624803;
  int * kQI5cgd3 = &cwOMFu7I;
  unsigned char vmkgR6QN = (unsigned char)247;
  int  Geo5P3Jm = 2147483647;
  int * OinxT_p4 = &Geo5P3Jm;
  unsigned char IuDsvkUc = (unsigned char)0;
  long long C = 1ULL << 63;
  switch (vmkgR6QN)
  {
    case 0x95:
      *kQI5cgd3 = vmkgR6QN - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *kQI5cgd3 = vmkgR6QN - 0x80;
      break;

    default:
      *kQI5cgd3 = 0;
      break;

    switch (kuPE0jzX)
    {
      case 0x95:
        *ytVzW1jN = 0x01;
        break;

      case 0x80:

      switch (_zHLJEZg)
      {
        case 0x95:
          *yiptnCMY = _zHLJEZg - 0x91;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *yiptnCMY = _zHLJEZg - 0x80;
          break;

        default:
          *yiptnCMY = 0;
          break;

      }

      case 0x81:

      case 0x82:
        *ytVzW1jN = 0x00;
        break;

      default:
        *ytVzW1jN = 0x05;
        break;

    }

  }

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
  transparent_crc(vmkgR6QN, "vmkgR6QN", 1);
  transparent_crc(_j4HMEAV, "_j4HMEAV", 1);
  transparent_crc(kuPE0jzX, "kuPE0jzX", 1);
  transparent_crc(_zHLJEZg, "_zHLJEZg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

