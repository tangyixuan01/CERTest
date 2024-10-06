//e:struct a
{
  unsigned b;
  unsigned c;
};d:int;printf:func int;f:struct a
{
  unsigned b;
  unsigned c;
} *
int main()
{
  for (; d; d--)
  {
    struct a g[] = {{2, 1}, {2, 1}};
    *f = g[1];
  }

  printf("%d\n", e.c);
}

