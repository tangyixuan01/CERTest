//b:int;c:int *
void foo(int p)
{
  int t;
  for (t = 0; t < 16; t++)
    p ^= -1;

  *c = ~(p & b);
}

