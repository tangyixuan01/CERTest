//e:union a
{
  long b;
  short c;
  int d;
};f:union a
{
  long b;
  short c;
  int d;
};g:unsigned *
for (;;)
{
  long *i = &e.b;
  *i = 0;
  for (; 4;)
  {
    --(*g);
    return f;
  }

}
