//
if (si1 > 0)
{
  if (si2 > 0)
  {
    if (si1 > (32767 / si2))
    {
      return si1;
    }
  }
  else
  {
    if (si2 < (((-32767) - 1) / si1))
    {
      return si1;
    }
  }
}
else
{
  if (si2 > 0)
  {
    if (si1 < (((-32767) - 1) / si2))
    {
      return si1;
    }
  }
  else
  {
    if ((si1 != 0) && (si2 < (32767 / si1)))
    {
      return si1;
    }
  }
}
