//a:struct S1
{
  char f0;
};b:struct S2
{
  int f2;
  int f3;
  struct S0 f4;
  struct S1 f5;
}
a = b.f5;
