//b:int;c:int;a:int [8][8]
for (c = 0; c < 8; c++)
  for (b = 0; b < 2; b++)
  a[b + 4][c] = a[c][0];

