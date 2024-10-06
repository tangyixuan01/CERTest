//e:int;i:int;c:struct S0
{
  int f0;
  int f1;
};d:int;a:int;f:struct S1
{
  int f0;
};b:int;h:struct S1
{
  int f0;
}
void fn2(int p1, struct S1 p2)
{
  int j = e;
  for (e = 1; e; e = j)
  {
    if (c.f1)
      b = 0;
    else
    {
      i = 1 >> a;
      if (!i)
        fn2(0, f);
      b = p2.f0 || (p1 | d);
    }
    p2 = h;
  }

}

