//c:int;a:struct S
{
  unsigned f0 : 13;
  int f1 : 19;
  int f2 : 27;
  int f3 : 8;
};b:int
int main()
{
  struct S d = {4, 5, 10878, 1};
  for (; b < 7; b++)
  {
    int e = d.f1 | (d.f0 && (5 % d.f3));
    int f = c - d.f0;
    d.f2 = e;
    d.f0 = f;
  }

  a = d;
  return 0;
}

