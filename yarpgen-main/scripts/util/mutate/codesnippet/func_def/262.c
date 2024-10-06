//e:int;c:int;d:short;printf:func int;a:char;g:int;b:int [3][8]
int main()
{
  for (; e >= 0; e--)
  {
    d = 1;
    for (; d >= 0; d--)
    {
      c = 0;
      for (; c <= 1; c++)
      {
        b[0][((d * 2) + c) + 1] = 0;
        g = a <= '7';
        b[(g - 1) + d][c] ^= 1;
      }

    }

  }

  printf("%d\n", b[0][1]);
}

