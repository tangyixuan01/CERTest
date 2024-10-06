//prime_tab:unsigned int [];abort:func void
int main(void)
{
  unsigned int n;
  unsigned int low;
  unsigned int mid;
  unsigned int high;
  n = 64;
  low = 0;
  high = 1;
  while (low != high)
  {
    mid = low + ((high - low) / 2);
    if (n > prime_tab[mid])
      low = mid + 1;
    else
      high = mid;
  }

  if (n > prime_tab[low])
    abort();
  return low;
}

