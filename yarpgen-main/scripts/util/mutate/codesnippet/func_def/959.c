//b:int;a:int;printf:func int
void c(int e)
{
  for (; a < 2; a++)
  {
    if (b)
    {
      printf("%d\n", b);
      goto L;
    }
    for (; e < 1; e++)
      L:
    ;


  }

}

