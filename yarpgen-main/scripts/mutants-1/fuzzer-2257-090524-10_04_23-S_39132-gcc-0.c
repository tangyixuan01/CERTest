#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

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
  int u6wUc19R = -2147483648;
  int lcAMiIeG = 2147483647;
  int y1_AkPMv = 1239985628;
  struct epic_private ep;
  unsigned int rx_ring[5];
  int i;
  ep.rx_skbuff[0] = 5;
  ep.rx_ring = rx_ring;
  for (i = 0; i < 5; i++)
  {
    ep.rx_ring[i] = i;
    ep.rx_skbuff[i] = 0;
    for (; u6wUc19R < 6; u6wUc19R++)
      if (y1_AkPMv)
    {
      int *n = &lcAMiIeG;
      for (; u6wUc19R < 9; u6wUc19R++)
        *n = 1;

    }

  }

  if (ep.rx_skbuff[0] != 0)
  {
    abort();
  }
  transparent_crc(y1_AkPMv, "y1_AkPMv", 1);
  transparent_crc(lcAMiIeG, "lcAMiIeG", 1);
  transparent_crc(u6wUc19R, "u6wUc19R", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

