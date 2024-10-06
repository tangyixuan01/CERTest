#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

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
  int i;
  for (i = 0; i < 32; i++)
  {
    ep->rx_ring[i].next = ep->rx_ring_dma + ((i + 1) * (sizeof(struct epic_rx_desc)));
    ep->rx_skbuff[i] = 0;
  }

  ep->rx_ring[i - 1].next = ep->rx_ring_dma;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  rk8pJY2z = 2147483647;
  int * xuK28mQp = &rk8pJY2z;
  unsigned char kyzM8wVu = (unsigned char)255;
  struct epic_private ep;
  struct epic_rx_desc rx_ring[32];
  int i;
  for (i = 0; i < 32; i++)
  {
    rx_ring[i].next = 0;
    switch (kyzM8wVu)
    {
      case 0x95:
        *xuK28mQp = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *xuK28mQp = 0x00;
        break;

      default:
        *xuK28mQp = 0x05;
        break;

    }

  }

  ep.rx_ring = rx_ring;
  ep.rx_ring_dma = (unsigned int) rx_ring;
  epic_init_ring(&ep);
  transparent_crc(kyzM8wVu, "kyzM8wVu", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (i = 0; i < 5; i++)
  {
    printf("%8X\n", ep.rx_ring[i].next);
  }

}

