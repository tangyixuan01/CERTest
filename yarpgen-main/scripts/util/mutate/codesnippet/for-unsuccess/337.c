//b:int *[10];d:int;a:int [9][2]
for (; d < 4; d++)
  b[d + 5] = &a[d + 2][1];
