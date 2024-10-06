#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

struct epic_rx_desc
{
  unsigned int next;
};
struct epic_private
{
  struct epic_rx_desc *rx_ring;
  unsigned int rx_ring_dma;
  unsigned char *rx_skbuff[32];
};
static void epic_init_ring(struct epic_private *ep)
{
  int TjEkqNLd = -2147483648;
  int BprGODxa = -2147483648;
  int dfVvaLoM = -1463753976;
  short bs5DKLG9 = (short)32767;
  int i;
  for (TjEkqNLd = 0; TjEkqNLd > (-3); TjEkqNLd = dfVvaLoM)
    BprGODxa |= bs5DKLG9;

  for (i = 0; i < 32; i++)
  {
    ep->rx_ring[i].next = ep->rx_ring_dma + ((i + 1) * (sizeof(struct epic_rx_desc)));
    ep->rx_skbuff[i] = 0;
  }

  transparent_crc(bs5DKLG9, "bs5DKLG9", 1);
  transparent_crc(dfVvaLoM, "dfVvaLoM", 1);
  transparent_crc(BprGODxa, "BprGODxa", 1);
  transparent_crc(TjEkqNLd, "TjEkqNLd", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  ep->rx_ring[i - 1].next = ep->rx_ring_dma;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int b6TEpWOQ = 916939780;
  struct epic_private ep;
  struct epic_rx_desc rx_ring[32];
  int i;
  for (i = 0; i < 32; i++)
  {
    rx_ring[i].next = 0;
  }

  ep.rx_ring = rx_ring;
  ep.rx_ring_dma = (unsigned int) rx_ring;
  epic_init_ring(&ep);
  transparent_crc(b6TEpWOQ, "b6TEpWOQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (i = 0; i < 5; i++)
  {
    printf("%8X\n", ep.rx_ring[i].next);
    switch (b6TEpWOQ)
      case 111:
      case 222:
      case 44:
      return 0;




  }

}

