//a:int [1];fn2:func void;g:char;b:int;fn1:func void
int main()
{
  a[0] = 1;
  fn2();
  fn1(g & 1);
  if (b != 1)
    __builtin_abort();
  return 0;
}

