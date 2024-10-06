//e:int;c:int;d:int;a:int;f:char [1][3];b:int
void fn1()
{
  for (d = 0; d < 2; d++)
  {
    f[b][d] = 0;
    for (e = 0; e < 3; e++)
    {
      if (c)
        a--;
      f[0][e] = 1;
    }

  }

}

