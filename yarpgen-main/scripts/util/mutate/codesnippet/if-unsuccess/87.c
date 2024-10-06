//prod:unsigned *;sp_orig:unsigned *
if (!(refmpn_cmp(prod, sp_orig, size) == 0))
  __gmp_assert_fail("foo.c", 35, "refmpn_cmp (prod, sp_orig, size) == 0");
