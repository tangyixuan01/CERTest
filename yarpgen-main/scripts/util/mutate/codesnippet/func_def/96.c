//e:int *;c:volatile int;b:int
void foo(int *p)
{
  int f = 0;
  for (; b < 1; b++)
  {
    e = p;
    if (c)
    {
      if (f)
        ;
      break;
    }
    if (c)
      break;
  }

  if (!e)
    __builtin_abort();
}

