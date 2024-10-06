//b:volatile int;a:int;c:int;d:int
int fn1()
{
  for (; d < 1; d++)
    a = 0;

  if (1 & (1 << b))
    for (;;)
  {
    if (a)
      break;
    return 0;
  }

  else
    c = 0;
  return 1;
}

