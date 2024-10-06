//a:int;c:int;foo:func int;printf:func int
int main()
{
  c = foo();
  if (!c)
    a = 0;
  printf("%d\n", a);
  return 0;
}

