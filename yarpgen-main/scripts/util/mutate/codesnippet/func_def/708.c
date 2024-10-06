//e:int;c:short;d:int;printf:func void;a:char [7];f:int;g:int;b:char [10][7]
int main()
{
  for (; d <= 4; d++)
  {
    e = 0;
    for (; e <= 6; e++)
    {
      if (a[c])
        b[e + 3][d + 2] = 1;
      a[0] = 5;
      b[e][d + 2] = 0;
    }

  }

  for (; f < 10; f++)
  {
    g = 0;
    for (; g < 7; g++)
      printf("%d\n", b[f][g]);

  }

}

