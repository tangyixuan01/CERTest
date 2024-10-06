//fn1:func void;a:int
int main()
{
  for (; a < 1; a++)
  {
    fn1();
    __builtin_printf("0\n");
  }

  return 0;
}

