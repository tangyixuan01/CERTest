//b:int;a:int;c:int;__assert_fail:func void
int main()
{
  for (; a < 1; a++)
  {
    int *j;
    while (b)
      ;

    int **k = &j;
    L:
    *k = &c;

    (j) ? ((void) 0) : (__assert_fail("j", "small.c", 15, "main"));
    while (b)
    {
      int *m[2];
      m[a];
      N:
      if (b)
        goto L;

      j = m[1];
    }

  }

  while (c)
    goto N;

  return 0;
}

