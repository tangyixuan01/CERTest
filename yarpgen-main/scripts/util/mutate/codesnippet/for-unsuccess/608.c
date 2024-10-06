//b:int [64];i:int;c:int [64];a:int [64]
for (i = 0; i < 64; i++)
{
  long long d = a[i];
  long long e = b[i];
  d += e;
  c[i] = d;
}
