//e:int;d:short;fn2:func int;fn1:func void
int main()
{
  fn1(e, fn2());
  if (d != 0)
    __builtin_abort();
  return 0;
}

