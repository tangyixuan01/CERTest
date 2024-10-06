#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

unsigned a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int YmH7ZJAv = -340430607;
  int KWVGoTu7 = -2147483648;
  unsigned int LpJIqa0_ = 4294967295U;
  unsigned int jQY6wXB1 = 0U;
  int yfd9KHQu = 2147483647;
  int BQi7Z0fU = 2147483647;
  unsigned int HFTcWrPX = 4294967295U;
  int vrxGQbgc = 2147483647;
  int pny3lWwz = -843261938;
  int mNK7ByZ8 = -2147483648;
  if (KWVGoTu7 && yfd9KHQu)
  {
    mNK7ByZ8 = (pny3lWwz > 0) ? (pny3lWwz) : (-pny3lWwz);
    vrxGQbgc = (YmH7ZJAv > 0) ? (YmH7ZJAv) : (-YmH7ZJAv);
    jQY6wXB1 = mNK7ByZ8;
    LpJIqa0_ = vrxGQbgc;
    HFTcWrPX = jQY6wXB1 * LpJIqa0_;
    if (HFTcWrPX >= (1 << 30))
    {
      BQi7Z0fU = 1;
    }
    else
    {
      BQi7Z0fU = -1;
    }
  }
  unsigned b = 1;
  for (; b < 4; b++)
  {
    a = (a ^ 2000000000) * (-b);
    if (b > a)
    {
      __builtin_abort();
    }
    a = 3000000000;
  }

  transparent_crc(mNK7ByZ8, "mNK7ByZ8", 1);
  transparent_crc(pny3lWwz, "pny3lWwz", 1);
  transparent_crc(vrxGQbgc, "vrxGQbgc", 1);
  transparent_crc(HFTcWrPX, "HFTcWrPX", 1);
  transparent_crc(BQi7Z0fU, "BQi7Z0fU", 1);
  transparent_crc(yfd9KHQu, "yfd9KHQu", 1);
  transparent_crc(jQY6wXB1, "jQY6wXB1", 1);
  transparent_crc(LpJIqa0_, "LpJIqa0_", 1);
  transparent_crc(KWVGoTu7, "KWVGoTu7", 1);
  transparent_crc(YmH7ZJAv, "YmH7ZJAv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

