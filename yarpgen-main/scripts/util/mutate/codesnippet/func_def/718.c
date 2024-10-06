//c:int;foo:func int;printf:func int;a:int [1];b:int
int main()
{
  int *d = &b;
  if (foo(d != (&a[0])))
  {
    int *e = &c;
    int **f = &d;
    *f = e;
  }
  *d = 1;
  printf("%d\n", b);
  return 0;
}

