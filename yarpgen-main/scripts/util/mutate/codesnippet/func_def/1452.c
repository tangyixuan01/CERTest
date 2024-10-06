//e:int;c:int;d:int;a:int;b:int
void fn1()
{
  int g;
  if (!a)
    goto L1;
  int i = ~a;
  if (i)
  {
    i = a;
    L2:
    c = 0;

    L1:
    g = ~(a | i);

    if (!g)
      goto L2;
  }
  c = (e = (b = i));
  g = a && g;
  c = -(((e || b) + g) - d);
  int k = ~(c | e);
  while (k)
    ;

}

