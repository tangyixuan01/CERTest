//epic_rx_desc:int  i:int  
ep->rx_ring[i].next = ep->rx_ring_dma + ((i + 1) * (sizeof(struct epic_rx_desc)));