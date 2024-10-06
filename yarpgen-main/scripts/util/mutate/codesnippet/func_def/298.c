//b:int *;a:int;printf:func int
int main()
{
  int *c;
  int *d;
  int e;
  while (a)
  {
    int f[1];
    while (a)
      printf(c);

    c = f;
    b = (int *) (&d);
  }

  L:
  e = 1;

  if (a)
  {
    printf("%d", a);
    b = &e;
    (*c)++;
  }
  if (a)
    goto L;
  if (!e)
    __builtin_abort();
  return 0;
}

