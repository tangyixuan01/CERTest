//a:int  b:short  
if (!c)
{
  int *d = &a;
  int e = 0;
  for (; e < 1; e++)
    d = d;

  *d = (!(&d)) != b();
}
