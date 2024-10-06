//c:int *;d:int;printf:func int;a:char;f:char;g:func unsigned char;b:int
int main()
{
  *c = 0;
  d = b | (-2);
  f = g(d, a == 0);
  printf("%d\n", f);
  return 0;
}

