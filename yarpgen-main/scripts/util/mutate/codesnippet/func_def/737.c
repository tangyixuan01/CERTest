//b:int *;a:int;c:int *;printf:func int
int main()
{
  int d;
  int e;
  for (e = 0; e < 2; e++)
  {
    d = *b;
    *c = d && e;
  }

  printf("%d\n", a);
  return 0;
}

