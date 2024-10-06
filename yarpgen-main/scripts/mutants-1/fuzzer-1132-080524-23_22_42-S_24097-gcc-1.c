#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-if-snippet

int foo(int (*cb)(void))
{
  short UMsHyauN = (short)-32768;
  short u9zWGv5x = (short)32767;
  int O032QRct = 2147483647;
  int cAInr3ed = -2147483648;
  int mdsRU4z7 = -1332086445;
  int Jqjo8k1X = -1157075799;
  int U5fOYvpM = -962180716;
  int WYo7ujPK = -2147483648;
  int q2VtRp89 = 2147483647;
  U5fOYvpM = (Jqjo8k1X = (WYo7ujPK = q2VtRp89));
  if (cAInr3ed != 1)
  {
    mdsRU4z7 = UMsHyauN - 7;
    u9zWGv5x = mdsRU4z7 * 60694;
    O032QRct = u9zWGv5x;
  }
  transparent_crc(q2VtRp89, "q2VtRp89", 1);
  transparent_crc(WYo7ujPK, "WYo7ujPK", 1);
  transparent_crc(U5fOYvpM, "U5fOYvpM", 1);
  transparent_crc(Jqjo8k1X, "Jqjo8k1X", 1);
  transparent_crc(mdsRU4z7, "mdsRU4z7", 1);
  transparent_crc(cAInr3ed, "cAInr3ed", 1);
  transparent_crc(O032QRct, "O032QRct", 1);
  transparent_crc(u9zWGv5x, "u9zWGv5x", 1);
  transparent_crc(UMsHyauN, "UMsHyauN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (*cb)();
}

static int callback(void)
{
  return 0;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int callback(void);
  return foo(callback);
}

