//z:int;a:int [6]
for (int x = 5; x; x--)
  for (int y = z; y >= x; y--)
  a[y - x] += a[y];

