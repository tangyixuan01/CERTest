//a:int [6];c:unsigned
void fn1(int p1)
{
  c = (c >> 8) ^ a[c ^ (p1 & 5)];
}

