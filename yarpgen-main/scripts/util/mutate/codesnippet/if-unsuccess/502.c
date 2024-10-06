//prime_tab:unsigned int [];n:unsigned int;mid:unsigned int;low:unsigned int;high:unsigned int
if (n > prime_tab[mid])
  low = mid + 1;
else
  high = mid;
