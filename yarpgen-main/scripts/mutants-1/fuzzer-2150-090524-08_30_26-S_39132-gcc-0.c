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
  int G1JHijTe = -2147483648;
  int QvIbld6a = -2147483648;
  char U3hnmviS = (signed char)96;
  int ItSpTe3h = 1383428222;
  int rWwQAeOh = -359494951;
  int gj6PT0sR = 1166264763;
  struct epic_private ep;
  unsigned int rx_ring[5];
  int i;
  ep.rx_skbuff[0] = 5;
  ep.rx_ring = rx_ring;
  for (i = 0; i < 5; i++)
  {
    ep.rx_ring[i] = i;
    ep.rx_skbuff[i] = 0;
  }

  if (ep.rx_skbuff[0] != 0)
  {
    for (; U3hnmviS; U3hnmviS++)
    {
      for (; rWwQAeOh;)
        ItSpTe3h--;

      gj6PT0sR = (ItSpTe3h) ? (G1JHijTe % ItSpTe3h) : (0);
      QvIbld6a &= gj6PT0sR;
    }

    abort();
  }
  transparent_crc(gj6PT0sR, "gj6PT0sR", 1);
  transparent_crc(rWwQAeOh, "rWwQAeOh", 1);
  transparent_crc(ItSpTe3h, "ItSpTe3h", 1);
  transparent_crc(U3hnmviS, "U3hnmviS", 1);
  transparent_crc(QvIbld6a, "QvIbld6a", 1);
  transparent_crc(G1JHijTe, "G1JHijTe", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

