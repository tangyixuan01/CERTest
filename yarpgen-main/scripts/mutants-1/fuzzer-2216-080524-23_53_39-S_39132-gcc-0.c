#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

extern void abort(void);
struct epic_private
{
  unsigned int *rx_ring;
  unsigned int rx_skbuff[5];
};
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int no7BAteY = -2147483648;
  int CoNpmJ9B = 2147483647;
  short ndBUPul9 = (short)-32768;
  struct epic_private ep;
  unsigned int rx_ring[5];
  int i;
  ep.rx_skbuff[0] = 5;
  ep.rx_ring = rx_ring;
  for (i = 0; i < 5; i++)
  {
    ep.rx_ring[i] = i;
    ep.rx_skbuff[i] = 0;
    if (ndBUPul9)
      CoNpmJ9B = (no7BAteY) ? (0) : (1 % no7BAteY);
  }

  if (ep.rx_skbuff[0] != 0)
  {
    abort();
  }
  transparent_crc(ndBUPul9, "ndBUPul9", 1);
  transparent_crc(CoNpmJ9B, "CoNpmJ9B", 1);
  transparent_crc(no7BAteY, "no7BAteY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

