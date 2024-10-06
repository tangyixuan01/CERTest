//b:struct S1
{
  int f0;
  int f1;
  int f2;
};a:struct S1
{
  int f0;
  int f1;
  int f2;
};c:int
int fn1()
{
  if (!c)
    return 0;
  b = a;
  return 0;
}

