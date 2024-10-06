//i:int;foo:func int;y:struct Y;abort:func void
int main()
{
  struct X x;
  x.y.p = &i;
  if (foo(&x) != 1)
    abort();
  return 0;
}

