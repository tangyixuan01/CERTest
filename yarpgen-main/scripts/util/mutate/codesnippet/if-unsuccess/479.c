//foo:func int;e:int;d:int;f:int *
if (foo(2, d || p))
{
  int **m = &f;
  *m = &e;
}
