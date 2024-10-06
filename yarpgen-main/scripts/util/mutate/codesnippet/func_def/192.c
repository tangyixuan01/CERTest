//crc32_context:uint8_t;crc32_tab:uint8_t [256]
static void crc32_byte(uint8_t b)
{
  crc32_context = ((((int) crc32_context) >> 8) & 0x00FFFFFF) ^ crc32_tab[(crc32_context ^ b) & 0xFF];
}

