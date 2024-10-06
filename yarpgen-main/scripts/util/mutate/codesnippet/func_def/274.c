//c:struct S0
{
  int f0 : 24;
  int f1;
  int f74;
} *;printf:func int;a:struct S0
{
  int f0 : 24;
  int f1;
  int f74;
};fn1:func struct S0
int main()
{
  *c = fn1();
  printf("%d\n", a.f1);
  return 0;
}

