#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int foo(int (*cb)(void))
{
  int Jqjo8k1X = -1157075799;
  int U5fOYvpM = -962180716;
  int WYo7ujPK = -2147483648;
  int q2VtRp89 = 2147483647;
  U5fOYvpM = (Jqjo8k1X = (WYo7ujPK = q2VtRp89));
  transparent_crc(q2VtRp89, "q2VtRp89", 1);
  transparent_crc(WYo7ujPK, "WYo7ujPK", 1);
  transparent_crc(U5fOYvpM, "U5fOYvpM", 1);
  transparent_crc(Jqjo8k1X, "Jqjo8k1X", 1);
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

