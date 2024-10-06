//g:int [6][5];d:int;aj:int;k:int;c:int [6]
for (aj = 0; aj < 6; aj++)
  for (k = 0; k < 5; k++)
  d = c[d ^ g[aj][k]];

