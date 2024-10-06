//b:int;a:struct S
{
  int f0;
  int : 1;
  int f1 : 8;
  int f2;
}
void foo(int p)
{
  struct S c = a;
  c.f1 = p & 190;
  b = c.f1 < 1;
}

