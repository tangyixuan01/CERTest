//g:int;a:int;fn2:func int;printf:func int
int main()
{
  g = fn2(64);
  g || (a = 0);
  printf("%d\n", a);
  return 0;
}

