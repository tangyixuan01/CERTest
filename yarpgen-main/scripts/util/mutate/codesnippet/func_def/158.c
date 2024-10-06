//b:int;a:int
int main()
{
  int d = ~a;
  if (d < 1)
    d = a;
  int e = ~d;
  if (e > d)
    e = d;
  b = (~e) / e;
  return 0;
}

