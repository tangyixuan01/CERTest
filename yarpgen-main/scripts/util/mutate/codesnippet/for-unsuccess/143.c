//b:int;d:int;c:int
for (;;)
{
  int g = c;
  if (b)
    for (;;)
    ;

  if (!d)
    goto L1;
  if (g)
    break;
}
