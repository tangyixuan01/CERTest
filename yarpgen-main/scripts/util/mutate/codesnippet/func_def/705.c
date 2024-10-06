//e:union 
{
  int a;
  short b;
};c:union 
{
  int a;
  short b;
};d:union 
{
  int a;
  short b;
} *
void f()
{
  c.a = 0;
  *d = e;
  c.b = 0;
}

