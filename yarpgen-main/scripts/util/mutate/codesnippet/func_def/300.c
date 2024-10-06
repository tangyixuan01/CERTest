//Y_BITS:unsigned long;n2:size_t;Y_MASQ:unsigned long;Y_TINV:double;Y_LIMB:unsigned long;Y_MAX:unsigned long;n1:size_t
int nobugy_routine(size_t n1, size_t n2)
{
  size_t n;
  size_t nsize;
  size_t needed = 0;
  size_t i;
  int save;
  nsize = n1 + n2;
  needed = nsize * 32;
  Y_BITS = (unsigned long) (((double) 24.00) - (0.5 * log((double) needed)));
  needed = ((needed - 1) / ((size_t) Y_BITS)) + 3;
  Y_MASQ = (1U << Y_BITS) - 1L;
  Y_LIMB = 1U << Y_BITS;
  Y_MAX = 1U << (Y_BITS - 1);
  Y_TINV = 1.0 / ((double) Y_LIMB);
  return needed;
}

