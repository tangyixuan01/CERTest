//e:int;c:int [1];d:int *;printf:func int;a:int [2];f:int;b:int
int main()
{
  int *g = &c[0];
  for (b = 0; b < 1; b++)
  {
    if (a[1])
      break;
    g = 0;
  }

  f = ((&e) == g) + 1;
  *d = f;
  printf("%d\n", c[0]);
  return 0;
}

