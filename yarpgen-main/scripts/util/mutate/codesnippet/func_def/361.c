//e:int;c:int;d:int *;a:int;h:int *;g:int **;b:int;f:int *
int main()
{
  for (; e < 1; e++)
  {
    g = &h;
    for (; c < 1; c++)
    {
      int *i = &b;
      *g = f;
      d = 0;
      *i = 0;
      if (h != (&a))
        __builtin_abort();
    }

  }

  return 0;
}

