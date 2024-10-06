#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-if-snippet -> insert-if-snippet

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
  int LtSwQOWT = 1007286967;
  int vtgH0D9k = 2147483647;
  int MGRwtJV2 = -1995237819;
  int QpKaNfRy = 1568569333;
  int i;
  for (i = 0; i < 32; i++)
  {
    ep->rx_ring[i].next = ep->rx_ring_dma + ((i + 1) * (sizeof(struct epic_rx_desc)));
    ep->rx_skbuff[i] = 0;
    if (QpKaNfRy)
      MGRwtJV2 = 0;
    else
      MGRwtJV2 = vtgH0D9k || (LtSwQOWT = 0);
  }

  transparent_crc(QpKaNfRy, "QpKaNfRy", 1);
  transparent_crc(MGRwtJV2, "MGRwtJV2", 1);
  transparent_crc(vtgH0D9k, "vtgH0D9k", 1);
  transparent_crc(LtSwQOWT, "LtSwQOWT", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  ep->rx_ring[i - 1].next = ep->rx_ring_dma;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int S3qNvGCn = -1634834963;
  int  CuVk5evp = -1389991021;
  int * x6jdFmgv = &CuVk5evp;
  int enuk_dfV = 2147483647;
  if (enuk_dfV < (-1))
    *x6jdFmgv = S3qNvGCn;
  int vGtu86pi = -1818241208;
  struct epic_private ep;
  struct epic_rx_desc rx_ring[32];
  int i;
  for (i = 0; i < 32; i++)
  {
    if (vGtu86pi & 1)
      return 0;
    rx_ring[i].next = 0;
  }

  ep.rx_ring = rx_ring;
  ep.rx_ring_dma = (unsigned int) rx_ring;
  epic_init_ring(&ep);
  transparent_crc(vGtu86pi, "vGtu86pi", 1);
  transparent_crc(enuk_dfV, "enuk_dfV", 1);
  transparent_crc(S3qNvGCn, "S3qNvGCn", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (i = 0; i < 5; i++)
  {
    printf("%8X\n", ep.rx_ring[i].next);
  }

}

