//b:int;a:int;printf:func int
int main()
{
  int c;
  int d = 0;
  for (; d < 16; d++)
  {
    c = d;
    if (!d)
      c = c / 2;
    a = c;
    b = a;
  }

  printf("%d\n", b);
  return 0;
}

