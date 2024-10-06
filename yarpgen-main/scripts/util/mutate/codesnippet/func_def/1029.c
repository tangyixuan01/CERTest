//a:struct S1
{
  int f0;
  int f2;
  int f3;
  int f6;
  char f8;
} [1]
int main()
{
  struct S1 b[] = {1, 1, 1, 1, 1, 1, 1};
  b[0].f0 = 0;
  a[0] = b[1];
  return 0;
}

