//refmpn_memdup_limbs:func unsigned *;refmpn_malloc_limbs:func unsigned *
unsigned refmpn_divmod_1c(unsigned *rp, const unsigned *sp, long size, unsigned divisor, unsigned carry)
{
  unsigned *sp_orig;
  unsigned *prod;
  unsigned carry_orig;
  long i;
  do
  {
    if (!refmpn_overlap_fullonly_p(rp, sp, size))
      __gmp_assert_fail("foo.c", 20, "refmpn_overlap_fullonly_p (rp, sp, size)");
  }
  while (0);
  do
  {
    if (!(size >= 0))
      __gmp_assert_fail("foo.c", 21, "size >= 0");
  }
  while (0);
  do
  {
    if (!(carry < divisor))
      __gmp_assert_fail("foo.c", 22, "carry < divisor");
  }
  while (0);
  if (size == 0)
    return carry;
  sp_orig = refmpn_memdup_limbs(sp, size);
  prod = refmpn_malloc_limbs(size);
  carry_orig = carry;
  for (i = size - 1; i >= 0; i--)
    refmpn_udiv_qrnnd(&rp[i], &carry, carry, sp[i], divisor);

  do
  {
    if (!(refmpn_mul_1c(prod, rp, size, divisor, carry) == carry_orig))
      __gmp_assert_fail("foo.c", 34, "refmpn_mul_1c (prod, rp, size, divisor, carry) == carry_orig");
  }
  while (0);
  do
  {
    if (!(refmpn_cmp(prod, sp_orig, size) == 0))
      __gmp_assert_fail("foo.c", 35, "refmpn_cmp (prod, sp_orig, size) == 0");
  }
  while (0);
  free(sp_orig);
  free(prod);
  return carry;
}

