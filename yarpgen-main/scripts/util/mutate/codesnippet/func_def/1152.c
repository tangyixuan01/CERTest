//
inline static void platform_main_end(uint64_t x, int flag)
{
  if (!flag)
  {
    printf("checksum = %llx\n", x);
  }
}

