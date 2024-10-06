//fn1:func void;b:int [10]
int main()
{
  for (;;)
  {
    fn1();
    break;
  }

  if (b[1] != 1)
    __builtin_abort();
  return 0;
}

