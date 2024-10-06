//b:int;c:int;a:int
int main()
{
  int d = 1;
  for (b = 0; b < 1; b++)
  {
    for (c = 0; c < 1; c++)
      a |= (-d) + c;

    d = 0;
  }

  if (a != (-1))
    __builtin_abort();
  return 0;
}

