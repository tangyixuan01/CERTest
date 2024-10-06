//a:int *;foo:func void;d:int *
int main()
{
  *d = 1;
  assert(a == 0);
  foo();
  return 0;
}

