//e:int;c:unsigned [5];d:unsigned long long;f:int;g:int;b:long
void h()
{
  for (; f < 11; f++)
  {
    b = g;
    for (e = 0; e < 5; e++)
    {
      c[e] = (e - b) - (c[e] >> 5);
      g = c[e];
    }

  }

  if (c[0])
    d = 0;
}

