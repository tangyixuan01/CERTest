//e:int;c:int;d:int;a:int;b:int
int main()
{
  int f = 2;
  int g = 1;
  int h = -3;
  L1:
  c = b ^ 1;

  if (!f)
    goto L3;
  if (d)
    g = e;
  f = h;
  if (!c)
    goto L1;
  L2:
  if (g)
    a = 0;

  L3:
  if (d == g)
    goto L2;

  return 0;
}

