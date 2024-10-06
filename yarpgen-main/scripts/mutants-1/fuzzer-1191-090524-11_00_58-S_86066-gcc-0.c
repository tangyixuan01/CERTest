#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

struct A
{
  int b : 2;
  int c : 2;
  unsigned d : 8;
};
int main()
{
  platform_main_begin();
  crc32_gentab();
  int Tb6JcL4i = 1528315529;
  unsigned int ojX_wIMf = 1212070820U;
  struct A t = {0, 0, 2};
  L:
  t.d = ~((~((~0) % t.d)) % 2);

  if (!t.d)
  {
    if (ojX_wIMf < (10 * 10))
      return Tb6JcL4i + 1;
    goto L;
  }
  transparent_crc(ojX_wIMf, "ojX_wIMf", 1);
  transparent_crc(Tb6JcL4i, "Tb6JcL4i", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

