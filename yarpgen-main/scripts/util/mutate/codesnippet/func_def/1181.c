//e:int;fn1:func int;i:int;fn3:func unsigned int
static char fn2()
{
  int j = -9;
  for (; j; j = fn1(j, 0))
  {
    for (; i;)
      fn3(j);

    if (j)
      for (; e;)
      ;

  }

  return 0;
}

