#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b;
int c[2][8];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int V9NPGlJ7 = -2147483648;
  int XZCtFwmo = 2147483647;
  int VbxXvYte = -1857398314;
  int sm72xBtl = 2147483647;
  int nGkNbXVU = 1337880264;
  for (a = 0; a < 8; a++)
  {
    for (b = 0; b < 2; b++)
    {
      c[b][a] = c[b][b + 6] ^ 1;
    }

  }

  if (c[0][7] != 0)
  {
    __builtin_abort();
    V9NPGlJ7 = -(((VbxXvYte || XZCtFwmo) + nGkNbXVU) - sm72xBtl);
  }
  transparent_crc(nGkNbXVU, "nGkNbXVU", 1);
  transparent_crc(sm72xBtl, "sm72xBtl", 1);
  transparent_crc(VbxXvYte, "VbxXvYte", 1);
  transparent_crc(XZCtFwmo, "XZCtFwmo", 1);
  transparent_crc(V9NPGlJ7, "V9NPGlJ7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

