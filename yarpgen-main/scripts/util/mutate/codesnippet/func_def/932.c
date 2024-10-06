//e:int;c:volatile int;d:volatile int;a:int;b:int
int main()
{
  int f = a = 0;
  for (; a < 2; a++)
  {
    b &= (8 ^ f) & 1;
    for (e = 0; e < 6; e++)
      if (c)
      f = d;

  }

  if (b != 0)
    __builtin_abort();
  return 0;
}

