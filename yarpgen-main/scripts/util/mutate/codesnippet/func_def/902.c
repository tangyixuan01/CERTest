//c:struct S
{
  int f0;
  int f1;
};a:struct S
{
  int f0;
  int f1;
} [2];b:int
int main()
{
  struct S d = {0, 1};
  for (b = 0; b < 2; b++)
  {
    a[b] = d;
    c = (d = a[0]);
  }

  if (c.f1 != 1)
    __builtin_abort();
  return 0;
}

