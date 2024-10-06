//c:int;d:short;printf:func int;a:int;fn1:func char
int main()
{
  lbl:
  ++a;

  d--;
  c = fn1(d, 146);
  if (c)
    goto lbl;
  printf("%d\n", a);
  return 0;
}

