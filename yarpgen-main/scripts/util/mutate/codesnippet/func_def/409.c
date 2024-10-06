//b:struct S0
{
  int f0;
  int f1;
  int f2;
  int f3;
  int f4;
};a:int
void foo(struct S0 p)
{
  b.f2 = 0;
  if (p.f2)
    a = 1;
}

