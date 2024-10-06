//e:int;c:unsigned char *;d:int;f:int;fn1:func int
static int fn2(struct S p)
{
  int g = 200;
  for (e = 4; e; e = fn1(e))
  {
    for (; d; d++)
      ;

    *c &= p.f1 & g;
    g = --(*c);
    if (f)
      return 0;
  }

  return 0;
}

