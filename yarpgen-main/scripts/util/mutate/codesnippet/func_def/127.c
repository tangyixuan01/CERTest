//b:int;a:int;c:int;d:int
int main()
{
  int e = d;
  if (~c)
  {
    e = 0;
    L:
    ;

  }
  a = e;
  short h = b;
  b = 0;
  a = (h + c) + (a & e);
  if (a)
    goto L;
  return 0;
}

