#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int printf(const char *, ...);
int c;
void d(unsigned f)
{
  int swJYcRIM = 2147483647;
  int zBPJW_by = -531578865;
  int x4zm53BL = -2147483648;
  int _kLSbcgZ = 1595844872;
  int Uy_KvX3x = -2147483648;
  transparent_crc(Uy_KvX3x, "Uy_KvX3x", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; _kLSbcgZ >= 0; _kLSbcgZ--)
  {
    zBPJW_by = x4zm53BL;
    x4zm53BL = (swJYcRIM ^ (swJYcRIM && Uy_KvX3x)) && 1;
  }

  transparent_crc(_kLSbcgZ, "_kLSbcgZ", 1);
  transparent_crc(x4zm53BL, "x4zm53BL", 1);
  transparent_crc(zBPJW_by, "zBPJW_by", 1);
  transparent_crc(swJYcRIM, "swJYcRIM", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  c = f;
}

#pragma pack(1)
struct 
{
  unsigned : 15;
  signed : 21;
  signed : 26;
  signed a : 9;
} b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned long e = b.a;
  d(e >> 56);
  printf("%d\n", c);
  return 0;
}

