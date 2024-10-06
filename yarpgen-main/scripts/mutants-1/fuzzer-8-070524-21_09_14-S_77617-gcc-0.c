#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

static unsigned good(unsigned x, unsigned n)
{
  unsigned Rbh7Bkte = 3360613301U;
  int RtWiBIuP = -2147483648;
  int RMDSHKTv = -2147483648;
  int AF08CWe_ = -340518629;
  short yXlvVqaz = (short)-32768;
  short oEfy52QR = (short)-32768;
  short KN_vlE50 = (short)-31393;
  n &= 0x1F;
  transparent_crc(KN_vlE50, "KN_vlE50", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; AF08CWe_ < 1; AF08CWe_++)
    while (yXlvVqaz)
  {
    if (RtWiBIuP)
      yXlvVqaz = RMDSHKTv;
    RtWiBIuP = 1;
    RMDSHKTv = (oEfy52QR = (KN_vlE50) ? (0) : (Rbh7Bkte % KN_vlE50));
  }


  transparent_crc(oEfy52QR, "oEfy52QR", 1);
  transparent_crc(yXlvVqaz, "yXlvVqaz", 1);
  transparent_crc(AF08CWe_, "AF08CWe_", 1);
  transparent_crc(RMDSHKTv, "RMDSHKTv", 1);
  transparent_crc(RtWiBIuP, "RtWiBIuP", 1);
  transparent_crc(Rbh7Bkte, "Rbh7Bkte", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (n) ? (x + n) : (x);
}

static unsigned fail(unsigned x, unsigned n)
{
  return n &= (0x1F) ? (x + n) : (x);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  return fail(0xDEADBEEFU, 16U) == 0xDEADBEFFU;
}

