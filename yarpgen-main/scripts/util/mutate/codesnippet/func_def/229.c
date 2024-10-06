//fn1:func short;a:int;fn2:func short;printf:func int
int main()
{
  int c;
  char e;
  c = fn2(-1, a && 1);
  e = fn1(((unsigned) c) > 33000) + 2;
  printf("%d\n", e);
  return 0;
}

