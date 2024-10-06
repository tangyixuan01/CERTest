//crc32_context:uint32_t
if (flag)
{
  printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
}
