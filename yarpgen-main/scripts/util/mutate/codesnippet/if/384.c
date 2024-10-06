//b:int;c:int;a:int
if (!b)
{
  b = a;
  c = (a == 0) ? (1) : (1 % a);
  if (c)
    b = 0;
}
