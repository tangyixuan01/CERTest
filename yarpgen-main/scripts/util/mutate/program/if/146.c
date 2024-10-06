//crc:uint32_t  poly:const uint32_t  
if (crc & 1)
{
  crc = (crc >> 1) ^ poly;
}
else
{
  crc >>= 1;
}
