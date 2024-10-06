//v:volatile char
unsigned foo(unsigned x)
{
  if (x > 7)
    return 0;
  unsigned a = x + 1;
  unsigned b = x + 2;
  unsigned c = a + b;
  unsigned d = (3 * x) + 4;
  unsigned e = x + 3;
  unsigned f = (d + c) + e;
  unsigned a2 = a;
  unsigned b2 = b;
  unsigned c2 = c;
  unsigned d2 = d;
  unsigned e2 = e;
  unsigned f2 = f;
  v++;
  return f;
}

