//i:int;x:struct X
int foo(struct X *x)
{
  struct Y y = x->y;
  *y.p = 0;
  i = 1;
  return *y.p;
}

