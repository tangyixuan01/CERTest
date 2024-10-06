//b:int;fn4:func int;fn1:func int;f:int
static int fn5()
{
  int g = -19;
  for (; g; g = fn1(g, 0))
  {
    for (; f; f++)
      fn4(g);

    if (g)
      b = 0;
  }

  return 0;
}

