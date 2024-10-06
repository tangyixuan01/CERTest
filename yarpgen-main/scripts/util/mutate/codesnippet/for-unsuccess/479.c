//d:int;f:int *;e:int;foo:func int;i:int
for (; i < 1; i++)
{
  if (i)
    goto lbl;
  if (foo(2, d || p))
  {
    int **m = &f;
    *m = &e;
  }
}
