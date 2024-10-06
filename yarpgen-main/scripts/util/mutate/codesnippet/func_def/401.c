//b:int;a:int [64];c:int
int main()
{
  int d = 0;
  for (; d < 64; d++)
    a[d] = d;

  int e = 1;
  L:
  for (c = 0; c < 1; c++)
    __builtin_printf("%d\n", e);


  e = 0;
  while (b)
    goto L;

  return 0;
}

