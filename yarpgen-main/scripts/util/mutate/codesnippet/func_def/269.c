//e:int;c:int;d:int;a:struct S1
{
  int f0 : 31;
  int f1 : 6;
};b:struct S1
void fn2()
{
  for (;;)
  {
    a.f1 = 1;
    struct S1 f = {};
    b = f;
    e = 0;
    if (d)
      c = a.f0;
    break;
  }

}

