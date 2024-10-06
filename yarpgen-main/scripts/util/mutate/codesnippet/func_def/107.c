//e:int;c:int;d:int [3];a:int;f:int;b:int
int main()
{
  if (b)
    goto L;
  for (; f < 1; f++)
    for (; a < 1; a++)
  {
    for (c = 0; c < 3; c++)
      for (e = 0; e < 3; e++)
      d[e] |= c;


    for (; b; b++)
      L:
    ;


  }


  if (d[1] != 3)
    __builtin_abort();
  return 0;
}

