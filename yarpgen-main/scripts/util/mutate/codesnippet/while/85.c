//v:unsigned int;n:int
while (1)
{
  if (v < 10)
    return n;
  if (v < (10 * 10))
    return n + 1;
  if (v < ((10 * 10) * 10))
    return n + 2;
  if (v < (((10 * 10) * 10) * 10))
    return n + 3;
  n += 4;
  v /= ((10 * 10) * 10) * 10;
}
