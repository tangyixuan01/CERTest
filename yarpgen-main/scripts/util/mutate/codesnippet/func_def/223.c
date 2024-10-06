//aw:func int;c:char;printf:func int;g:struct a
{
  unsigned b;
  int c : 9;
  int d;
}
int main()
{
  aw(1);
  printf("%d\n", g.c);
  return 0;
}

