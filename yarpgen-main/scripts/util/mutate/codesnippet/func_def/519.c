//c:int;printf:func int;a:struct 
{
  volatile int f0;
  int f3;
  int f4;
};b:struct 
{
  volatile int f0;
  int f3;
  int f4;
};fn1:func void
int main()
{
  b = a;
  fn1();
  printf("%d\n", c);
  return 0;
}

