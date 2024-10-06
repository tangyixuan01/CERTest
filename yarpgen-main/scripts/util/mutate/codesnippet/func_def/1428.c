//a:int;foo:func void;printf:func int
int main()
{
  int e;
  foo();
  for (e = 0; e < 10; e++)
  {
    int f = 1 / a;
    printf("%d\n", (f && (f == 1)) || 0);
  }

  return 0;
}

