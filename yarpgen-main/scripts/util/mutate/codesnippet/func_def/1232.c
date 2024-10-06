//b:func short;a:int;c:int
int main()
{
  if (!c)
  {
    int *d = &a;
    int e = 0;
    for (; e < 1; e++)
      d = d;

    *d = (!(&d)) != b();
  }
  return 0;
}

