//crc32_tab:uint32_t [256];poly:const uint32_t;crc:uint32_t;i:int;j:int
for (i = 0; i < 256; i++)
{
  crc = i;
  for (j = 8; j > 0; j--)
  {
    if (crc & 1)
    {
      crc = (crc >> 1) ^ poly;
    }
    else
    {
      crc >>= 1;
    }
  }

  crc32_tab[i] = crc;
}
