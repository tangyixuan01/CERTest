//a:int;printf:func int
int f()
{
  int b;
  int c;
  for (b = 0; b < 3; b++)
  {
    if (!a)
      break;
    c--;
    printf("%d", c);
  }

  return b;
}

