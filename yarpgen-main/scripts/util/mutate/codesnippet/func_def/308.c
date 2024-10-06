//
void bug(long long upc)
{
  unsigned long *p = (unsigned long *) (&upc);
  printf("%08lx %08lx\n", p[0], p[1]);
  printf("%08lx %08lx\n", p[0], p[1]);
}

