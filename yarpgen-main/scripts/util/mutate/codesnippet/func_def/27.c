//epic_init_ring:func void
int main()
{
  struct epic_private ep;
  struct epic_rx_desc rx_ring[32];
  int i;
  for (i = 0; i < 32; i++)
    rx_ring[i].next = 0;

  ep.rx_ring = rx_ring;
  ep.rx_ring_dma = (unsigned int) rx_ring;
  epic_init_ring(&ep);
  for (i = 0; i < 5; i++)
  {
    printf("%8X\n", ep.rx_ring[i].next);
  }

}

