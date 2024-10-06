#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  RYsyHLq8 = 2147483647;
  int * KaJ2imvI = &RYsyHLq8;
  unsigned char v9NgZcmE = (unsigned char)0;
  int s64lf90N = 2147483647;
  int avkILG4A = -658825901;
  volatile int a = 0;
  while ((avkILG4A = sizeof(char [s64lf90N])) && (s64lf90N < 10))
  {
    printf("%d ", avkILG4A);
    switch (v9NgZcmE)
    {
      case 0x95:
        *KaJ2imvI = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *KaJ2imvI = 0x00;
        break;

      default:
        *KaJ2imvI = 0x05;
        break;

    }

    s64lf90N++;
  }

  long b = 2147483648L;
  int c = a % 2;
  int x = (((int) (-b)) + c) % (-2147483647);
  if (x != (-1))
  {
    __builtin_abort();
  }
  transparent_crc(avkILG4A, "avkILG4A", 1);
  transparent_crc(s64lf90N, "s64lf90N", 1);
  transparent_crc(v9NgZcmE, "v9NgZcmE", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

