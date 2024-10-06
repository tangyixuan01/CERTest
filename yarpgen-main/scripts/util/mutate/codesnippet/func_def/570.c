//fn1:func void;c:int;e:int
int main()
{
  for (;;)
  {
    fn1();
    if (e)
      break;
  }

  if (c != 0)
    __builtin_abort();
  return 0;
}

