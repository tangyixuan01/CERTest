//i:long
for (i = size - 1; i >= 0; i--)
  refmpn_udiv_qrnnd(&rp[i], &carry, carry, sp[i], divisor);
