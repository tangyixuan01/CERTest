//c:int;foo:func void;d:int;printf:func int;a:int;b:int
int main()
{
  for (a = 0; a < 2; a++)
  {
    foo((a - ((unsigned int) (b = 1))) >= ((unsigned int) a));
    if (c > 0)
      d = 0;
  }

  printf("%d\n", b);
  return 0;
}

