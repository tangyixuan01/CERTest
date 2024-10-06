#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int var_9 = 1693986256;
int var_14;
int arr_16[11];
void test();
int main()
{
  platform_main_begin();
  crc32_gentab();
  test();
}

void test()
{
  int LvXFrsRy = -500600957;
  int lcIjW25O = -2147483648;
  int QL0Oa6B_ = -2147483648;
  int * dPcbzafe = &var_9;
  for (lcIjW25O = 24; lcIjW25O; lcIjW25O--)
  {
    for (LvXFrsRy = 0; LvXFrsRy < 6; LvXFrsRy++)
      QL0Oa6B_ |= 1;

    *dPcbzafe |= QL0Oa6B_;
  }

  transparent_crc(QL0Oa6B_, "QL0Oa6B_", 1);
  transparent_crc(lcIjW25O, "lcIjW25O", 1);
  transparent_crc(LvXFrsRy, "LvXFrsRy", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (short a = 0; a < ((short) var_9); a += 12140)
  {
    for (short b = 0; b < 8; b++)
    {
      if ((var_14 > 1U) ? (var_14) : (1U))
      {
        arr_16[a + b] = 0;
      }
    }

  }

}

