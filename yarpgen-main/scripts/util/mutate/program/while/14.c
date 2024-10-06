//low:unsigned int  high:unsigned int  mid:unsigned int  n:unsigned int  prime_tab:unsigned int  
while (low != high)
{
  mid = low + ((high - low) / 2);
  if (n > prime_tab[mid])
    low = mid + 1;
  else
    high = mid;
}
