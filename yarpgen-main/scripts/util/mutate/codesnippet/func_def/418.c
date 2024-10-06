//i:int;c:int;d:int;printf:func int;a:int [8][10];b:short
int main()
{
  a[2][5] = (b = 4);
  for (; b; b--)
  {
    c = 0;
    for (; c <= 6; c++)
      a[c + 1][b + 2] = a[c][b + 1];

  }

  for (; i < 8; i++)
  {
    d = 0;
    for (; d < 10; d++)
      printf("%d\n", a[i][d]);

  }

  return 0;
}

