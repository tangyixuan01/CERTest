//b:int;a:int;printf:func int
int main()
{
  for (; a < 1; a++)
  {
    int c = ~b;
    if ((b > c) || (!c))
    {
      printf("0");
      continue;
    }
    if (c < 0)
      printf("1\n");
  }

  return 0;
}

