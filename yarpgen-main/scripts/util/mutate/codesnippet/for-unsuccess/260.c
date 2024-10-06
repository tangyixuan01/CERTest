//sq2:int [9];i:int;sq:int [9];n:int
for (i = 0; i < 9; i++)
{
  int d = n % 10;
  n /= 10;
  if (sq[d] == 0)
    return;
  sq2[i] = sq[d];
  sq[d] = 0;
}
