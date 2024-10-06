#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-if-snippet

int a;
int b;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned short CwiQX_Hr = (unsigned short)65535;
  int v5ZuwTDl = -2147483648;
  for (; a < 2; a += 2)
  {
    for (b = 0; b < 1; b++)
    {
      if (a < 1)
      {
        c = 0;
      }
    }

    for (; c < 1; c++)
    {
      ;
      if (CwiQX_Hr)
        CwiQX_Hr = (CwiQX_Hr << 1) ^ 1;
    }

  }

  if (a != 2)
  {
    __builtin_abort();
    if ((!v5ZuwTDl) && v5ZuwTDl)
      ;
  }
  transparent_crc(v5ZuwTDl, "v5ZuwTDl", 1);
  transparent_crc(CwiQX_Hr, "CwiQX_Hr", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

