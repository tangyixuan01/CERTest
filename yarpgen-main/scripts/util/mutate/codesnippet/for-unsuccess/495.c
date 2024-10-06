//d:short *;f:func short;e:short *;c:short;a:char
for (; a <= 9; a++)
{
  short *i = &c;
  *i = (*d = f(*e, *e));
}
