//c:int;a:int;transparent_crc:func void;crc32_gentab:func void;b:int;crc32_context:uint32_t
void main()
{
  crc32_gentab();
  for (; b < 9; b++)
  {
    c = 0;
    for (; c < 3; c++)
      transparent_crc(a);

  }

  printf("%lX\n", crc32_context ^ 0xFFFFFFFFUL);
}

