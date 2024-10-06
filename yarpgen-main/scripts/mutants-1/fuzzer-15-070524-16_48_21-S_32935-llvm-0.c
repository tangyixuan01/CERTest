#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a[64];
int b;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int Ued5LkYO = -296598089;
  int d = 0;
  for (; d < 64; d++)
  {
    a[d] = d;
  }

  int e = 1;
  L:
  for (c = 0; c < 1; c++)
  {
    __builtin_printf("%d\n", e);
  }


  e = 0;
  while (b)
  {
    while (Ued5LkYO < 1)
    {
    }

    goto L;
  }

  transparent_crc(Ued5LkYO, "Ued5LkYO", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

