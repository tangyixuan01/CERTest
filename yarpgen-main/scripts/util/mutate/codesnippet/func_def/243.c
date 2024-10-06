//b:int;c:int;d:int
void fn1()
{
  for (c = 0; c < 2; c++)
  {
    int e;
    int f = 1;
    for (e = 0; e < 2; e++)
    {
      if (!f)
        return;
      for (d = 0; d; d++)
        f = b;

    }

  }

}

