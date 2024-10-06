#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a[128];
int b;
int e;
int g;
short c;
short d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int aGcH_E5u = 2147483647;
  int tpdk1PXJ = 2147483647;
  switch (aGcH_E5u)
  {
    case 5:
      tpdk1PXJ = 1;
      break;

    case 6:
      tpdk1PXJ = 2;
      break;

    case 7:
      tpdk1PXJ = 3;
      break;

  }

  int f = 0;
  int h = 5;
  for (; f < 128; f++)
  {
    a[f] = f;
  }

  L:
  c = b / h;

  e = d;
  if (d)
  {
    h = 0;
  }
  if (d < g)
  {
    printf("%d\n", d);
    goto L;
  }
  transparent_crc(tpdk1PXJ, "tpdk1PXJ", 1);
  transparent_crc(aGcH_E5u, "aGcH_E5u", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

