//b:int;printf:func int;a:int
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
