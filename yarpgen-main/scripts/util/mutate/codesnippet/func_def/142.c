//y:struct S1;foo:func void;printf:func int
int main()
{
  foo(y.f0);
  printf("%d\n", y.f0.f0);
  return 0;
}

