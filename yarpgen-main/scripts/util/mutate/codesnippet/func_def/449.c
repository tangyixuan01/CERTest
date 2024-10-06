//fn1:func void;a:int [6];c:unsigned
void fn2(long long p1)
{
  int b = p1;
  c = ((c >> 8) ^ (a[c ^ (b & 5)] >> 8)) ^ a[(c ^ 5) & 5];
  c = (c >> 8) ^ a[(c ^ 5) & 5];
  fn1(p1 >> 4);
  fn1(p1 >> 2);
  fn1(p1 >> 40);
  c = (c >> 8) ^ a[(c ^ 6) & 5];
}

