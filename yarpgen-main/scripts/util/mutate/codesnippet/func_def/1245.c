//e:int;c:volatile int;d:int;k:int;j:int;a:int;h:int;g:int;b:int;f:int
void fn1()
{
  int i = 0;
  for (; i < 3; i++)
    while (g > 7)
    if (b)
    goto L;


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

}

