//ep:struct epic_private;rx_ring:struct epic_rx_desc [32];i:int
for (i = 0; i < 32; i++)
{
  ep->rx_ring[i].next = ep->rx_ring_dma + ((i + 1) * (sizeof(struct epic_rx_desc)));
  ep->rx_skbuff[i] = 0;
}
