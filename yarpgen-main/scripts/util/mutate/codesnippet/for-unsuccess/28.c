//g:unsigned int *;f:char;c:func unsigned char;a:unsigned int
for (a = 7; a != 5; a = c(a, 6))
{
  f = (a >= 8) ? (1) : (5 >> a);
  *g = (f & 4) <= 0;
}
