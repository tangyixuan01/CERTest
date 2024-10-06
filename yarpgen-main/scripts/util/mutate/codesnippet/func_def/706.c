//c:union 
{
  int a;
  short b;
};f:func void;printf:func int
int main()
{
  f();
  printf("%d\n", c.b);
}

