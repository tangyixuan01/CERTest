//fn1:func void;a:int [6][5]
int main()
{
  fn1();
  if (a[2][1] != 0)
    __builtin_abort();
  return 0;
}

