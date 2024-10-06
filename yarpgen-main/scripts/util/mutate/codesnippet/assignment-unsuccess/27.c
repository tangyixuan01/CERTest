//rx_ring:struct epic_rx_desc [32];i:int;ep:struct epic_private
ep->rx_ring[i].next = ep->rx_ring_dma + ((i + 1) * (sizeof(struct epic_rx_desc)));
