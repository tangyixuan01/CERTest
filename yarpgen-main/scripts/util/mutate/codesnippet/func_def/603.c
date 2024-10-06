//c:int;d:int;b:struct 
{
  int a : 1;
}
int main()
{
  for (; d < 2; d++)
  {
    int e = ~c;
    int f = 0;
    int g;
    if (e)
    {
      f = c;
      g = b.a;
      b.a = f;
      if (b.a >= g)
        __builtin_abort();
    }
    c = f;
    b.a = g;
  }

  return 0;
}

