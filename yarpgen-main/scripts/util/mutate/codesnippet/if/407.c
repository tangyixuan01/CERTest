//h:int;e:short;d:unsigned;c:char;f:int
if (h >= (-1936967575))
{
  int m = ((h / d) / 110000000) ^ (f & c);
  short n = c;
  if (h <= (-1936967575))
    n = e;
  h = m;
  c = ~(n + f);
  d = -1;
}
