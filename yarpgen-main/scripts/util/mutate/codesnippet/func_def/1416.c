//
int foo(int a, ...)
{
  va_list ap;
  va_list ap1;
  va_list ap2;
  va_list ap3;
  va_list ap4;
  __builtin_va_start(ap);
  int b;
  ap1 = ap;
  ap2 = ap1;
  do
  {
    ap1 = ap2;
    b = __builtin_va_arg(ap1);
    ap2 = ap1;
  }
  while (b > 10);
  return a + b;
}

