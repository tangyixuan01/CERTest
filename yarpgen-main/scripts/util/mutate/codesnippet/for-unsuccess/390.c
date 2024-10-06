//b:int;c:struct S0
{
  int f0;
  int f1;
  int f2;
  int f3;
  int f4;
  int f5 : 15;
  int f6 : 17;
  int f7 : 2;
  int f8 : 30;
};a:int
for (; b; b = a)
{
  struct S0 e = {0, 0, 0, 0, 0, 0, 1, 0, 1};
  c = e;
  c.f6 = -1;
}
