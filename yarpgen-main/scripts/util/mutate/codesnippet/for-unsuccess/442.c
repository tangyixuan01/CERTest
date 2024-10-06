//b:int;d:int;c:int;a:int [36]
for (c = 0; c < 6; c++)
  for (d = 0; d < 6; d++)
  for (b = 0; b < 6; b++)
  a[6 + c] = a[(c * 6) + c] ^ 1;


