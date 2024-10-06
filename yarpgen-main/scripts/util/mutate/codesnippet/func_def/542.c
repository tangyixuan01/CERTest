//b:int;c:int;a:int
int main()
{
  for (; a < 2; a += 2)
  {
    for (b = 0; b < 1; b++)
      if (a < 1)
      c = 0;

    for (; c < 1; c++)
      ;

  }

  if (a != 2)
    __builtin_abort();
  return 0;
}

