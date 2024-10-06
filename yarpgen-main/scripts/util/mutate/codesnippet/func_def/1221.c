//printf:func int;b:struct S3
{
  struct S1 f4;
  struct S0 f5;
};fn1:func struct S3
int main()
{
  struct S3 d = {{{0, 0, 0, 0, 0, 0}, {0, 0, -1, 1, 0, 0}}, {0, 0, 0, 0, 0, 0}};
  b = fn1(d);
  printf("%d\n", b.f4.f1.f2);
  return 0;
}

