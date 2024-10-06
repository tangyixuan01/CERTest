#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

static int *a;
int b;
int d;
int *c = &b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  nmH_qGvL = -1360920392;
  int * FibIepZa = &nmH_qGvL;
  unsigned char oYEdfDa1 = (unsigned char)0;
  int e[3] = {2, 1, -2139220656};
  switch (oYEdfDa1)
  {
    case 0x95:
      *FibIepZa = oYEdfDa1 - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *FibIepZa = oYEdfDa1 - 0x80;
      break;

    default:
      *FibIepZa = 0;
      break;

  }

  a = &e[0];
  d = (e[2] < 0) || (e[2] > (7 >> e[2]));
  *c = d;
  transparent_crc(oYEdfDa1, "oYEdfDa1", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", b);
}

