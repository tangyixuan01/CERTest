//
int main()
{
  unsigned long u;
  unsigned long v;
  {
    int x[5];
    u = (unsigned long) x;
  }
  {
    int y[5];
    v = (unsigned long) y;
  }
  printf("u = %#lx\n", u);
  printf("v = %#lx\n", v);
  printf("diff = %#lx\n", u - v);
  printf("eq = %d\n", u == v);
}

