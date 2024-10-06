//h:int *;d:int *;f:int *;e:int;c:int;b:int;g:int **;a:int
for (; e < 1; e++)
{
  g = &h;
  for (; c < 1; c++)
  {
    int *i = &b;
    *g = f;
    d = 0;
    *i = 0;
    if (h != (&a))
      __builtin_abort();
  }

}
