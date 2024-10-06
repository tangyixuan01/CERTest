//b:unsigned int [1][2][16][4];d:signed char [1][2][16][4];res:unsigned int;a:short
for (signed char i = 0; i < 16; i += 4)
  for (signed char j = 2; j < 10; j += 4)
  res = (1 < ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]))) ? (1) : ((a) ? ((unsigned short) d[0][1][i][2]) : (b[0][1][i][2 + 1]));

