#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

struct S
{
  unsigned b4 : 4;
  unsigned b6 : 6;
} s;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  PhcWHLeo = 268327439;
  int * X2smBE9p = &PhcWHLeo;
  unsigned char r4AygH1n = (unsigned char)0;
  s.b6 = 31;
  s.b4 = s.b6;
  switch (r4AygH1n)
  {
    case 0x95:
      *X2smBE9p = r4AygH1n - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *X2smBE9p = r4AygH1n - 0x80;
      break;

    default:
      *X2smBE9p = 0;
      break;

  }

  s.b6 = s.b4;
  transparent_crc(r4AygH1n, "r4AygH1n", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (s.b6 == 15) ? (0) : (1);
}

