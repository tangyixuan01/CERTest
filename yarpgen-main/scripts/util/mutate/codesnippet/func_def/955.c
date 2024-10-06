//e:int **;c:long;d:char;printf:func int;a:int *;fn2:func int;g:int;b:int
int main()
{
  for (b = 0; b < 1; b = 1)
  {
    *e = &g;
    *a = 1;
    fn2(&g, &c);
  }

  printf("%d\n", d);
  return 0;
}

