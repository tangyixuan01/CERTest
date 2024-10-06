//d:int *;c:int;foo:func int;a:int [1]
if (foo(d != (&a[0])))
{
  int *e = &c;
  int **f = &d;
  *f = e;
}
