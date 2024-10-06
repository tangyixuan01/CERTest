//i:int;e:int;c:volatile int;d:int;j:int;f:int;g:char;h:int
void fn2()
{
  for (h = 15; h < 22; h += 5)
    if (c)
  {
    d--;
    f--;
    g--;
    if (d)
    {
      j = (f < 0) || ((f >= 0) > f);
      i = (e ^= 1);
    }
    e = 0;
  }
  else
    g = 0;

}

