//e:int;c:int;d:int;a:int;f:int;b:int;fn1:func void
int main()
{
  fn1();
  lbl:
  e || (b = 0);

  if (f)
    d = 0;
  if (a)
  {
    c = a;
    f = 0;
    a = 0;
    goto lbl;
  }
  if (c != 1)
    __builtin_abort();
  return 0;
}

