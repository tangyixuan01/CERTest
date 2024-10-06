//v:int;p:int [48]
int main()
{
  p[32] = 1;
  for (int i = 48; i--;)
    if (p[i])
  {
    if ((i > 39) || ((i > 7) && ((i & 7) > 2)))
      break;
    if (i < 8)
      v = 1;
    else
      if (!(i & 1))
      v = 2;
    else
      v = 3;
  }

  if (v != 2)
    __builtin_abort();
  return 0;
}

