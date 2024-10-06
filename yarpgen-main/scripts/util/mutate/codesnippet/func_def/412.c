//a:struct S0;printf:func int
int main()
{
  (a.f2 = 1) | (a.f1 = 0);
  printf("%d\n", a.f2);
  return 0;
}

