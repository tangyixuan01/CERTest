//n:volatile int;m:volatile int;foo:func void;printf:func int
int main()
{
  int o = 0;
  if (n)
    o = 1;
  foo();
  for (; m; m++)
    if (o)
    printf("%d\n", 0);

  return 0;
}

