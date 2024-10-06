//b:int;a:int [256];c:int;printf:func int
int main()
{
  int d = 0;
  for (; d < 256; d++)
    a[d] = c;

  for (b = 0; !b; b--)
    printf("%d\n", b);

  return 0;
}

