//e:short *;c:union 
{
  int a;
  short b;
};d:int *;printf:func int;f:int;g:char
int main()
{
  f = c.a;
  *d = 1;
  *e |= g;
  printf("%d\n", c.b);
}

