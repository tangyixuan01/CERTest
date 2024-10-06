//e:int;c:int;h:int;g:int;b:int *;f:int
static void fn1()
{
  for (; c < 1; c++)
    for (h = 0; h < 2; h++)
  {
    (g && h) || (e ^= !g);
    g = 0;
  }


  *b = h;
  if (e < (-1))
    *b = f;
}

