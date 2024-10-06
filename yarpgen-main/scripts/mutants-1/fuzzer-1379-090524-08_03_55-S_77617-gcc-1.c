#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

static unsigned good(unsigned x, unsigned n)
{
  int I8N4ez9m = 1501347019;
  int Z2PaEov1 = -2147483648;
  switch (I8N4ez9m)
  {
    case 5:
      Z2PaEov1 = 1;
      break;

    case 6:
      Z2PaEov1 = 2;
      break;

    case 7:
      Z2PaEov1 = 3;
      break;

  }

  n &= 0x1F;
  transparent_crc(Z2PaEov1, "Z2PaEov1", 1);
  transparent_crc(I8N4ez9m, "I8N4ez9m", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (n) ? (x + n) : (x);
}

static unsigned fail(unsigned x, unsigned n)
{
  int TO_26Mf4 = -412208368;
  int  dnQ4ERfZ = 2147483647;
  int * PzWXSd7x = &dnQ4ERfZ;
  transparent_crc(TO_26Mf4, "TO_26Mf4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *PzWXSd7x = TO_26Mf4;
  return n &= (0x1F) ? (x + n) : (x);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  return fail(0xDEADBEEFU, 16U) == 0xDEADBEFFU;
}

