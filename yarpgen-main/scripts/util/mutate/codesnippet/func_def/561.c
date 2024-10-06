//e:int;c:int [9][8];d:int;printf:func int;a:unsigned;b:int
int main()
{
  {
    for (; e < 1; e++)
    {
      c[3][1] = 0;
      for (; a < 4; a++)
        for (; b < 9; b++)
        for (d = 0; d < 8; d++)
        c[b][d] = 1;



    }

  }
  printf("%d\n", c[3][1]);
  return 0;
}

