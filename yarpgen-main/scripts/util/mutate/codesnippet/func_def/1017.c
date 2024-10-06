//e:int;c:union 
{
  short a;
  long b;
};d:short *;printf:func int;f:long *
int main()
{
  for (; e <= 1; e++)
  {
    *f = 0;
    ++(*d);
  }

  printf("%d\n", c.a);
}

