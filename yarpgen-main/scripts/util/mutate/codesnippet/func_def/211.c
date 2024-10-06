//c:int;d:int;a:int [50];b:short
int main()
{
  int e;
  for (; b <= 4; b++)
    for (; c <= 4; c++)
  {
    *a |= 1;
    e = 0;
    for (; e <= 4; e++)
      a[e + 1] |= 3;

  }


  for (; d < 6; d++)
    printf("%d\n", a[d]);

}

