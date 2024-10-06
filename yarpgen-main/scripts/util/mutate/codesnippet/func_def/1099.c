//i:int;e:int;foo:func int;d:int;f:int *;g:int
void bar(int p)
{
  lbl:
  if (*f)
    g = 0;

  int **l = &f;
  *l = 0;
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

}

