//b:int;crc32_context:uint32_t;crc32_tab:uint32_t [256]
static void crc32_byte(uint8_t b)
{
  crc32_context = ((crc32_context >> 8) & 0x00FFFFFF) ^ crc32_tab[(crc32_context ^ b) & 0xFF];
}

