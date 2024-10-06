//a:struct S
{
  int f0 : 1;
  int : 0;
  int f1 : 1;
};bar:func void;printf:func int
int main()
{
  bar();
  printf("%d\n", a.f1);
  return 0;
}

