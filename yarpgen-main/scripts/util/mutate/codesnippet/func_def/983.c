//e:int;c:int [28];d:int;a:int [];b:int
int main()
{
  for (; b <= 6; b++)
  {
    d = 0;
    for (; d <= 3; d++)
    {
      for (;;)
      {
        c[d * 3] = 10;
        break;
      }

      c[b] = a[b];
    }

  }

  for (e = 0; e < 7; e++)
    printf("%d\n", c[e]);

}

