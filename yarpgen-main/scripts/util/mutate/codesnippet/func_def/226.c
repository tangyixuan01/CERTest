//b:short;fn1:func void;fn2:func int;c:int
int main()
{
  int d = c && b;
  c = d;
  fn2(0);
  fn1();
  return 0;
}

