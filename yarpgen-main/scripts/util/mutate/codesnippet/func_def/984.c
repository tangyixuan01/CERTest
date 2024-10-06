//printf:func int
int main()
{
  struct S a;
  a.f0;
  a.f1 = 1;
  printf("%d\n", a.f1);
  return 0;
}

