//buf:char [64];d:int;c:int
if ((((c >= (-35791395)) && (c < 35791394)) && (d >= (-1))) && (d < 0x7fffffff))
{
  int e = __builtin_sprintf(buf, "%+03d%02d", c + 1, d + 1);
  if (e > 7)
    __builtin_abort();
}
