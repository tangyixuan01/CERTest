//b:int;fn1:func short;c:int
int main()
{
  for (c = -20; c; c++)
    b |= fn1(c);

  return 0;
}

