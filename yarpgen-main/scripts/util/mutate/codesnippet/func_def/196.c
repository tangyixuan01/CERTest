//func_1:func void;crc32_byte:func void;g_17:uint64_t;crc32_gentab:func void
int main(void)
{
  crc32_gentab();
  func_1();
  crc32_byte(g_17);
  printf("checksum = %lld\n", g_17);
  return 0;
}

