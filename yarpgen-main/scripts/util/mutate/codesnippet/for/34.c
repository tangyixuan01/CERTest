//b:int;d:long;c:int;a:int
for (; b < 1; b++)
{
  ((c && d) & 3) || a;
  d = c;
  c = -1;
  if (d)
    __builtin_abort();
}
