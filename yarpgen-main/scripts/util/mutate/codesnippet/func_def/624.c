//b:int;a:char;fn1:func short
int main()
{
  b = fn1(a);
  if (b != (-1))
    __builtin_abort();
  return 0;
}

