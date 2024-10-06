//b:struct S
{
  char f0;
  int : 31;
  char f1;
  int f2;
};c:int
int foo()
{
  struct S d = {0, 0, 0};
  c = d.f0;
  b = d;
  return b.f1;
}

