#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  volatile unsigned HGm_jIcU = 3213755139U;
  short N8OpJKy2 = (short)32767;
  char sGSoP4UF = (signed char)-128;
  int LgbY5O_c = 1345313733;
  struct epic_private ep;
  unsigned int rx_ring[5];
  int i;
  ep.rx_skbuff[0] = 5;
  ep.rx_ring = rx_ring;
  for (i = 0; i < 5; i++)
  {
    LgbY5O_c = ~((sGSoP4UF / N8OpJKy2) & (HGm_jIcU > LgbY5O_c));
    ep.rx_ring[i] = i;
    ep.rx_skbuff[i] = 0;
  }

  if (ep.rx_skbuff[0] != 0)
  {
    abort();
  }
  transparent_crc(LgbY5O_c, "LgbY5O_c", 1);
  transparent_crc(sGSoP4UF, "sGSoP4UF", 1);
  transparent_crc(N8OpJKy2, "N8OpJKy2", 1);
  transparent_crc(HGm_jIcU, "HGm_jIcU", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

