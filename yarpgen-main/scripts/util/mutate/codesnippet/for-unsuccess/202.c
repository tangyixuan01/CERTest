//b:long;g:int;f:int;e:int;c:unsigned [5]
for (; f < 11; f++)
{
  b = g;
  for (e = 0; e < 5; e++)
  {
    c[e] = (e - b) - (c[e] >> 5);
    g = c[e];
  }

}
