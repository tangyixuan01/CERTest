//b:int;d:int;f:int;e:int;i:unsigned short;c:int;a:int
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

