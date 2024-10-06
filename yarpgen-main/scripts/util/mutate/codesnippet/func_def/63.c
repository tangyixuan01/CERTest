//g_11:int32_t;safe_div_uint64_t:func uint64_t;g_5:int32_t;safe_mod_int8_t:func int8_t
int main(void)
{
  uint64_t l_7 = 0x509CB0BEFCDF11BBLL;
  g_11 ^= l_7 && (safe_div_uint64_t(safe_mod_int8_t(g_5, 0), -1L) != 1L);
  printf("checksum = %d\n", g_11);
  return 0;
}

