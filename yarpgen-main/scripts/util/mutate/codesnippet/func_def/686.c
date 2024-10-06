//i:int;d:long;j:unsigned long *;h:unsigned short *;g:unsigned [80]
int main()
{
  for (long m = 0; m < 8; ++m)
    d = 1;

  for (unsigned char p = 0; p < 17; p += ((d) ? (i) : (0)) - 35)
  {
    long t = (h[p]) ? (i) : (j[p]);
    g[p] = t;
  }

  if (g[0])
    __builtin_abort();
}

