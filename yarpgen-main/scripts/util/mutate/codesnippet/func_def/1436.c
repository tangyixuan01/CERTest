//e:int;c:short;d:short;printf:func int;a:int [128];g:int;b:int
int main()
{
  int f = 0;
  int h = 5;
  for (; f < 128; f++)
    a[f] = f;

  L:
  c = b / h;

  e = d;
  if (d)
    h = 0;
  if (d < g)
  {
    printf("%d\n", d);
    goto L;
  }
  return 0;
}

