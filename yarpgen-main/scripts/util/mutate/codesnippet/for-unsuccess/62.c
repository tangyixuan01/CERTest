//h:struct S;k:int;g:int;i:struct S
{
  int b : 18;
  int c : 1;
  int d : 24;
  int e : 15;
  int f : 14;
}
for (; k < 3; k++)
{
  struct S m = {5, 0, -5, 9, 5};
  h = m;
  if (g)
    i = m;
  h.e = 0;
}
