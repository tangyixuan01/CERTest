//e:int;c:char;d:short;a:int [6][9];f:int;b:char
int main()
{
  a[1][3] = 8;
  b = 1;
  for (; b <= 5; b++)
  {
    d = 0;
    for (; d <= 5; d++)
    {
      c = 0;
      for (; c <= 5; c++)
        a[b][c] = a[b][c + 2] & 216;

    }

  }

  for (; e < 6; e++)
  {
    f = 0;
    for (; f < 9; f++)
      printf("%d\n", a[e][f]);

  }

}

