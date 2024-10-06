//d:int [2];f:int;e:int *;b:int;a:int
for (; b < 2; b++)
{
  int g;
  if (f)
    b = 40;
  a = d[b * b];
  for (f = 0; f < 3; f++)
  {
    if (e)
      break;
    g--;
    if (a)
      a = g;
  }

}
