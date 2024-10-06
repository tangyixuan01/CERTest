//fn1:func void;c:struct S0
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
};printf:func int
int main()
{
  fn1();
  printf("%d\n", c.f7);
  return 0;
}

