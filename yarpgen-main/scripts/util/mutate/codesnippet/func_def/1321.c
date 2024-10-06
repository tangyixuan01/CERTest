//
static long int sg(long int kl, int mp)
{
  if (mp == 0)
    return 0;
  if ((kl == (-1)) && (mp == (-1)))
    return 0;
  return kl / mp;
}

