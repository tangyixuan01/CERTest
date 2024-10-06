//b:int [64];a:int [64];c:int [64]
void foo()
{
  int i;
  for (i = 0; i < 64; i++)
  {
    long long d = a[i];
    long long e = b[i];
    d += e;
    c[i] = d;
  }

}

