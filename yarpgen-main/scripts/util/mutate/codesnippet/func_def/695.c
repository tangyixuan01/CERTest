//b:int;a:struct S
{
  int f0 : 1;
  int : 0;
  int f1 : 1;
}
void bar()
{
  struct S d = {0, 1};
  a = d;
  b = d.f0;
}

