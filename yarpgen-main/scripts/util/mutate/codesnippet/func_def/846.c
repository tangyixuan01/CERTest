//c:int;d:int;printf:func int;a:int;b:int
int main()
{
  for (; b < 6; b++)
  {
    for (c = 8; c; c--)
      d = 1;

    a = d;
  }

  printf("%d\n", a);
  return 0;
}

