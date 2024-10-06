//e:int;c:int;d:int;a:int;b:int
int fn1()
{
  unsigned short i;
  int f = 53;
  for (e = 1;; e--)
    for (c = 1; c; c--)
  {
    i = (f > 1) ? (1) : (1 >> f);
    b = i == c;
    f = 0;
    for (a = 1; a;)
    {
      if (e)
        a--;
      if (d)
        return b;
    }

  }


}

