//i:int;ep:struct epic_private;rx_ring:unsigned int [5]
for (i = 0; i < 5; i++)
{
  ep.rx_ring[i] = i;
  ep.rx_skbuff[i] = 0;
}
