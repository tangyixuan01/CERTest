//fn1:func void;a:int;b:int
int main()
{
  for (a = 0; a < 1; a++)
    fn1();

  if (b != 0)
    __builtin_abort();
  return 0;
}

