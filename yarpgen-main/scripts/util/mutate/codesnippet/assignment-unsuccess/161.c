//crc32_tab:uint8_t [256];crc32_context:uint8_t
crc32_context = ((((int) crc32_context) >> 8) & 0x00FFFFFF) ^ crc32_tab[(crc32_context ^ b) & 0xFF];
