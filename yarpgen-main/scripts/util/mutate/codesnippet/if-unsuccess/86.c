//prod:unsigned *;carry_orig:unsigned
if (!(refmpn_mul_1c(prod, rp, size, divisor, carry) == carry_orig))
  __gmp_assert_fail("foo.c", 34, "refmpn_mul_1c (prod, rp, size, divisor, carry) == carry_orig");
