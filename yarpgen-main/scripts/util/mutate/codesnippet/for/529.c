//d:int;f:int;e:short;c:int;b:unsigned char;g:char
for (; c < 1; c++)
{
  short h;
  int i;
  char j;
  if (d)
    h = (i = f);
  j = b;
  e = ~((~f) || b);
  b = ~((~j) | ((i ^ b) && h));
  if (((b > 254) || (e > (-2))) || (!g))
    if (f != 1)
    __builtin_abort();
  f = i;
}
