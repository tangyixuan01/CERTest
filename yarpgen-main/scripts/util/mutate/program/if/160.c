//i:int  a:int  L2:Label  c:int  g:int  
if (i)
{
  i = a;
  L2:
  c = 0;

  L1:
  g = ~(a | i);

  if (!g)
    goto L2;
}
