//fn1:func void;b:struct 
{
  int f0;
  short f1;
  short f2;
  short f3;
}
int main()
{
  fn1();
  if (b.f3 != 2)
    __builtin_abort();
  return 0;
}

