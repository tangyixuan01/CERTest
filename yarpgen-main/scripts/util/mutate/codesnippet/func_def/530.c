//c:int;d:int;a:int [35];b:char
int main()
{
  char e;
  for (; b >= 0; b--)
  {
    e = 3;
    for (; e >= 0; e--)
      a[(b * 5) + e] = a[((b * 5) + e) + 1];

  }

  for (; c < 5; c++)
    ;

  for (; d < 7; d++)
    printf("%d\n", a[c * d]);

}

