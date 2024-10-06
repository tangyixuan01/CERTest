//e:int;c:int **;d:char;printf:func int;a:int *;f:int *;b:int
int main()
{
  int **g = &a;
  *c = &b;
  f = *g;
  int *h = f;
  char *i = &d;
  lbl:
  --(*i);

  *h &= 1 % e;
  if (d)
    goto lbl;
  printf("%d\n", b);
  return 0;
}

