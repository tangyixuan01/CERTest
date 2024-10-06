//fn1:func short;a:short
int main()
{
  while (fn1(++a, 3))
    ;

  if (a != 0)
    __builtin_abort();
  return 0;
}

