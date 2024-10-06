//fn1:func int *;c:int;h:int *
void fn2()
{
  for (; c >= 0; --c)
  {
    int j[] = {0, 0, 0, 0, 0};
    int *k = fn1();
    if (!k)
      __builtin_abort();
    h = &j[4];
  }

}

