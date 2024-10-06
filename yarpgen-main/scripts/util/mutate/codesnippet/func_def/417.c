//bar:func char;foo:func struct S1
int main(void)
{
  struct S1 s = foo();
  printf("%d\n", bar(0x99 ^ (s.f0 && 1), 1));
  return 0;
}

