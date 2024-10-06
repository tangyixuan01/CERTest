//
void test_neon_load_store_alignment(const uint8_t *ap, const uint8_t *bp, uint8_t *outp)
{
  union 
  {
    uint64_t u[2];
    uint8_t c[16];
  } a;
  union 
  {
    uint64_t u[2];
    uint8_t c[16];
  } b;
  memcpy(a.c, ap, 16);
  memcpy(b.c, bp, 16);
  a.u[0] ^= b.u[0];
  a.u[1] ^= b.u[1];
  memcpy(outp, a.c, 16);
}

