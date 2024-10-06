//c:int;printf:func int;a:struct 
{
  int f0 : 9;
  int f1 : 30;
  int f2 : 5;
  int f3 : 23;
  int f4 : 11;
  int f5 : 29;
  int f6 : 24;
  int : 14;
};b:struct 
{
  int f0 : 9;
  int f1 : 30;
  int f2 : 5;
  int f3 : 23;
  int f4 : 11;
  int f5 : 29;
  int f6 : 24;
  int : 14;
}
int main()
{
  printf("%d\n", a.f6);
  for (; c < 1; c++)
    printf("%d\n", b.f6);

  return 0;
}

