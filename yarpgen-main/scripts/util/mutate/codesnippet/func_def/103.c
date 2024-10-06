//b:short;bar:func void;c:int;printf:func int
int main()
{
  b++;
  l2:
  if (b)
    goto l2;

  bar();
  printf("%d\n", c);
  return 0;
}

