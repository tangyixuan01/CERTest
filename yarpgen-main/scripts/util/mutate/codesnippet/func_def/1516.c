//fn3:func void;fn2:func int;d:int
static int fn4(short p)
{
  for (d = 1; d;)
  {
    int h = -7;
    h = fn2(p, h);
    if (h)
      return 0;
    fn3(0, p);
  }

  fn3(0, 0);
  return 0;
}

