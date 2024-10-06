//i:int;table:int [32][256];j:int
for (i = 0; i < 32; i++)
  for (j = 0; j < 256; j++)
  table[i][j] = ((signed char) j) * i;

