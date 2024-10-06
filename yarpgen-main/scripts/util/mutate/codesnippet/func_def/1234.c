//fn1:func void;c:int;b:int [4]
int main()
{
  for (; c < 2; c++)
    fn1();

  if (b[1] != 0)
    __builtin_abort();
  return 0;
}

