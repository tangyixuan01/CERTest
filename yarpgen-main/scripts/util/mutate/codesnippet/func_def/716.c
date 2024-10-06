//a:struct S1
{
  int f0;
  int f1;
  int f2;
};b:struct S1
{
  int f0;
  int f1;
  int f2;
};fn1:func int
int main()
{
  struct S1 d = {0, 1, 0};
  a = d;
  a.f0 = d.f2;
  fn1();
  a = d;
  if (b.f1 != 1)
    __builtin_abort();
  return 0;
}

