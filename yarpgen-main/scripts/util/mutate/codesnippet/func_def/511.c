//b:int;a:int [8][8];c:int;printf:func int
int main()
{
  for (c = 0; c < 8; c++)
    for (b = 0; b < 2; b++)
    a[b + 4][c] = a[c][0];


  printf("%d\n", a[4][4]);
  return 0;
}

