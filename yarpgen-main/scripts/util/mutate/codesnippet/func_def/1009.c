//b:int *;a:int *[2];c:int **
void f()
{
  int d;
  int e[1][2];
  for (d = 0; d < 2; d++)
    a[d] = &e[0][1];

  *c = a[1];
  if (!b)
    __builtin_abort();
}

