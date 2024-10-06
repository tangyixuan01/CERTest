#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-assignment-snippet -> insert-while-snippet

static unsigned good(unsigned x, unsigned n)
{
  int RJm8hKLb = -441264375;
  int PEfKclzG = -2147483648;
  int _sK9vqfo = 2147483647;
  volatile unsigned UJpWFx0Z = 4129110416U;
  short VN63dhTW = (short)15565;
  char fXBSJV1H = (signed char)-70;
  int n6D4eBlX = -2147483648;
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
    n6D4eBlX = ~((fXBSJV1H / VN63dhTW) & (UJpWFx0Z > n6D4eBlX));
    RtWiBIuP = 1;
    RMDSHKTv = (oEfy52QR = (KN_vlE50) ? (0) : (Rbh7Bkte % KN_vlE50));
  }


  transparent_crc(oEfy52QR, "oEfy52QR", 1);
  transparent_crc(yXlvVqaz, "yXlvVqaz", 1);
  transparent_crc(AF08CWe_, "AF08CWe_", 1);
  transparent_crc(RMDSHKTv, "RMDSHKTv", 1);
  transparent_crc(RtWiBIuP, "RtWiBIuP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (PEfKclzG > 6)
  {
    int n;
    if (RJm8hKLb)
      break;
    _sK9vqfo = 1;
  }

  transparent_crc(Rbh7Bkte, "Rbh7Bkte", 1);
  transparent_crc(n6D4eBlX, "n6D4eBlX", 1);
  transparent_crc(fXBSJV1H, "fXBSJV1H", 1);
  transparent_crc(VN63dhTW, "VN63dhTW", 1);
  transparent_crc(UJpWFx0Z, "UJpWFx0Z", 1);
  transparent_crc(_sK9vqfo, "_sK9vqfo", 1);
  transparent_crc(PEfKclzG, "PEfKclzG", 1);
  transparent_crc(RJm8hKLb, "RJm8hKLb", 1);
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

