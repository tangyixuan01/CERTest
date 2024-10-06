#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

void abort(void);
void exit(int);
int t = 100;
int main()
{
  platform_main_begin();
  crc32_gentab();
  short HXcPrxW2 = (short)32767;
  int XiaqBESG = 2147483647;
  int jgKvHfsc = -1969786009;
  int YP0wxyWU = 946621212;
  int a[] = {0, 1, 2};
  int *i = &a[(sizeof(a)) / (sizeof(*a))];
  i--;
  while (i > a)
  {
    XiaqBESG = (HXcPrxW2 + YP0wxyWU) + (XiaqBESG & jgKvHfsc);
    i[0] = 1 + t, i--;
  }

  if (a[1] != (1 + t))
  {
    abort();
  }
  transparent_crc(YP0wxyWU, "YP0wxyWU", 1);
  transparent_crc(jgKvHfsc, "jgKvHfsc", 1);
  transparent_crc(XiaqBESG, "XiaqBESG", 1);
  transparent_crc(HXcPrxW2, "HXcPrxW2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  exit(0);
}

