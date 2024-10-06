//d:union 
{
  long a;
  int b;
  int c;
};f:char;e:int *;g:char
for (; f >= 0; f--)
{
  long *h = &d.a;
  *h = g;
  *e = 1;
}
