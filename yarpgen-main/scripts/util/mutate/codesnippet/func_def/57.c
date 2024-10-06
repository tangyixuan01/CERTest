//b:int [4];a:int [4];fn1:func void
int main()
{
  b[3] = 1;
  fn1();
  if (a[3])
    __builtin_abort();
  return 0;
}

