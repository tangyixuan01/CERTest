//
static char *itos(long num)
{
  char *p;
  static char buff[64];
  p = (buff + (sizeof(buff))) - 1;
  *p = '\0';
  if (num >= 0L)
    do
  {
    *(--p) = (num % 10L) + '0';
    num /= 10L;
  }
  while (num != 0L);
  else
  {
    if (num == ((long) 0x80000000))
    {
      p -= strlen("-2147483648");
      strcpy(p, "-2147483648");
    }
    else
    {
      num = -num;
      do
      {
        *(--p) = '0' + (num % 10L);
        num /= 10L;
      }
      while (num != 0L);
      *(--p) = '-';
    }
  }
  return p;
}

