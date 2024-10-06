//fn4:func int;fn3:func void;a:int;b:struct S;fn1:func char
static int fn2()
{
  char c = 117;
  b.f0 = 0;
  for (; b.f0 < 44; b.f0 = fn1(b.f0, 4))
  {
    fn3(b);
    a--;
    c++;
    c && fn4();
  }

  a--;
  return 0;
}

