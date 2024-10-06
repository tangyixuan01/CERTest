//e:int;b:int;c:int;d:int
int fn1()
{
  int f;
  for (;;)
  {
    int g = c;
    if (b)
      for (;;)
      ;

    if (!d)
      goto L1;
    if (g)
      break;
  }

  L1:
  if (d)
    return e;

  return 2;
}

