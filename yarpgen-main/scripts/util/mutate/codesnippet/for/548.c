//h:int;d:int;f:int;k:int;e:int;j:int;c:volatile int;b:int;a:int
for (; b < 1; b++)
{
  int *l = &h;
  int *m;
  if (e)
    goto L;
  for (; j < 1; j++)
  {
    int **n = &m;
    if (a)
    {
      l = &f;
      L:
      if (d > 2)
      {
        for (k = 1; k; k = k)
          c;

        continue;
      }

    }
    *n = l;
    if (m != (&h))
      __builtin_abort();
  }

}
