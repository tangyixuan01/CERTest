//h:short;f:int;e:int;c:int;b:int;g:int;printf:func int;a:int
for (; e < 2; e++)
{
  L1:
  f = 1;

  while ((b > 0) || (a > 0))
  {
    g++;
    h++;
    printf("%d", g);
  }

  L2:
  if ((!h) && ((!c) || a))
    goto L1;

  if (c)
    goto L2;
}
