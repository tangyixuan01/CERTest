//a:int;printf:func int
int main()
{
  int b = ~a;
  if (b < 0)
    b = a;
  unsigned c = ~b;
  if (c > b)
    a = (~b) || a;
  printf("%d\n", a);
  return 0;
}

