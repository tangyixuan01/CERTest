//e:short *;a:int;c:short
static int fn40()
{
  short *i = &c;
  *i = (*e = 1);
  if (a < 0)
    __builtin_abort();
  return 0;
}

