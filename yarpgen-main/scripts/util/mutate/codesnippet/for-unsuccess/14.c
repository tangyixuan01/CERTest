//i:int;rx_ring:struct epic_rx_desc [32]
for (i = 0; i < 32; i++)
  rx_ring[i].next = 0;
