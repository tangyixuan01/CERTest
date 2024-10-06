//e:int;c:int;d:int;a:int;f:int;g:int;b:int
int main()
{
  b = 1;
  while (1)
  {
    if (e > d)
      break;
    while (1)
    {
      int h = f % b;
      h = b;
      b = a;
      if (f)
        ;
      b = h;
      L:
      g = b;

      b = ~b;
      e = (f ^ g) ^ (~d);
      if (!b)
        break;
      b = ~c;
    }

  }

  return 0;
}

