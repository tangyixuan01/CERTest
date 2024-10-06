//crc32_gentab:func void;transparent_crc:func void;crc32_context:uint32_t
void main()
{
  int c = 1;
  crc32_gentab();
  transparent_crc(c);
  printf("%lX\n", crc32_context ^ 0xFFFFFFFFUL);
}

