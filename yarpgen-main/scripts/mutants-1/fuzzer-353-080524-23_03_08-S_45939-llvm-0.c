#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a[256];
int b;
int c;
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int k4zQFwrW = 1769236183;
  int b7KGB9dF = 36238739;
  int xDBHsmAF = -2147483648;
  int HAJV3ZCN = 2147483647;
  c = 0;
  for (; c < 256; c++)
  {
    a[c] = c;
  }

  for (; d; d++)
  {
    ;
  }

  HAJV3ZCN &= ((short) b7KGB9dF) & (xDBHsmAF = (k4zQFwrW ^= xDBHsmAF && 5));
  transparent_crc(HAJV3ZCN, "HAJV3ZCN", 1);
  transparent_crc(xDBHsmAF, "xDBHsmAF", 1);
  transparent_crc(b7KGB9dF, "b7KGB9dF", 1);
  transparent_crc(k4zQFwrW, "k4zQFwrW", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("checksum = %X\n", b);
}

