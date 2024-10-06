#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

#pragma pack(1)
struct A
{
  int b : 4;
  int c : 11;
  int d : 2;
  int e : 5;
} f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  Z4gT21vE = -2147483648;
  int * o6OupEt2 = &Z4gT21vE;
  unsigned char pVvgqEf_ = (unsigned char)0;
  switch (pVvgqEf_)
  {
    case 0x95:
      *o6OupEt2 = pVvgqEf_ - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *o6OupEt2 = pVvgqEf_ - 0x80;
      break;

    default:
      *o6OupEt2 = 0;
      break;

  }

  struct A g = {1, 1, 1, 1};
  while (!g.b)
  {
    f = g;
  }

  transparent_crc(pVvgqEf_, "pVvgqEf_", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

