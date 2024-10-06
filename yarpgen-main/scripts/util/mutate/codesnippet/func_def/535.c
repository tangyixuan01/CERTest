//fn1:func int;c:int;a:int
int main()
{
  int *g = &a;
  fn1(g);
  if (c != 4)
    __builtin_abort();
  return 0;
}

