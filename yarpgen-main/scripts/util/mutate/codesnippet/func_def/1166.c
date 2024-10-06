//fn1:func void;e:int;fn2:func short;c:int
static int fn3()
{
  c = 0;
  for (; c <= 3; c++)
  {
    fn2();
    fn1();
    e = 0;
  }

  return 1;
}

