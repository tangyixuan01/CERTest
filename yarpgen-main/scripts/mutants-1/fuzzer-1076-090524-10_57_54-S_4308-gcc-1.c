#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

extern int printf(const char *s, ...);
int main()
{
  platform_main_begin();
  crc32_gentab();
  int rS6IwhWi = -48424425;
  int RMDzjB8A = -2147483648;
  int UdkcyejW = -1827901922;
  int  QMlXo2B_ = 1227831517;
  int * HrISt0aC = &QMlXo2B_;
  unsigned char _usG280R = (unsigned char)28;
  long long C = 1ULL << 63;
  long long X;
  int Y = 32;
  switch (_usG280R)
  {
    case 0x95:
      *HrISt0aC = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *HrISt0aC = 0x00;
      break;

    default:
      *HrISt0aC = 0x05;
      break;

  }

  X = C >> (Y & 31);
  printf("%s (%llx)\n", (X != C) ? ("FAIL") : ("OK"), X);
  for (; rS6IwhWi < 1; rS6IwhWi++)
    if (UdkcyejW)
    RMDzjB8A++;

  transparent_crc(_usG280R, "_usG280R", 1);
  transparent_crc(UdkcyejW, "UdkcyejW", 1);
  transparent_crc(RMDzjB8A, "RMDzjB8A", 1);
  transparent_crc(rS6IwhWi, "rS6IwhWi", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

