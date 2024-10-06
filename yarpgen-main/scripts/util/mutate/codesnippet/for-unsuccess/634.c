//b:char [60];f:long long
for (long l = 0; l < 6; ++l)
  for (long m = 0; m < 4; ++m)
  f ^= b[l + (m * 4)];

