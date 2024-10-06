//prime_tab:unsigned int [];mid:unsigned int;low:unsigned int;high:unsigned int;n:unsigned int
while (low != high)
{
  mid = low + ((high - low) / 2);
  if (n > prime_tab[mid])
    low = mid + 1;
  else
    high = mid;
}
