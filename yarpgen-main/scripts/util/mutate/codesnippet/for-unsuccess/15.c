//ep:struct epic_private;rx_ring:struct epic_rx_desc [32];i:int
for (i = 0; i < 5; i++)
{
  printf("%8X\n", ep.rx_ring[i].next);
}
