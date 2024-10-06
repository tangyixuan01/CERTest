//rx_ring:struct epic_rx_desc [32];ep:struct epic_private
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

