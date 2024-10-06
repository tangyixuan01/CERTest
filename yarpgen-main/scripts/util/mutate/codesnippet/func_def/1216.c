//fn1:func int;b:int
int main()
{
  fn1();
  if (b)
    __builtin_abort();
  return 0;
}

