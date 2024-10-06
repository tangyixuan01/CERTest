//b:struct 
{
  volatile int f0;
  int f3;
  int f4;
};a:struct 
{
  volatile int f0;
  int f3;
  int f4;
};c:int
void fn1()
{
  c = b.f0;
  b = a;
}

