//d:int;f:int *;g:long *
void h()
{
  for (; d < 2; d++)
  {
    *g = 0;
    if (*f)
      return;
  }

  return;
}

