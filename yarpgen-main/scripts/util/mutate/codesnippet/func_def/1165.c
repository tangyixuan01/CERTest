//e:int;o:short;b:volatile int;d:int
static short fn2()
{
  int p = 3;
  for (; p >= 0; p--)
  {
    o = 0;
    for (; o <= 3; o++)
    {
      d = 0;
      for (; d <= 3; d++)
        b &= 5;

    }

    if (e)
      break;
  }

  return 1;
}

