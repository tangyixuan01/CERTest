//c:short [2];foo:func void;j:int *;printf:func int;g:int
int main()
{
  int *s = &g;
  foo(s);
  *j = c[1];
  printf("%d\n", g);
  return 0;
}

