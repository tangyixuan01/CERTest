//crc32_8bytes:func void;crc32_context:uint32_t
static void transparent_crc(uint64_t val, char *vname, int flag)
{
  crc32_8bytes(val);
  if (flag)
  {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
  }
}

