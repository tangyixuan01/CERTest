//
int foo(int a)
{
  assert((a + 100) > a);
  printf("%d %d\n", a + 100, a);
  return a;
}

