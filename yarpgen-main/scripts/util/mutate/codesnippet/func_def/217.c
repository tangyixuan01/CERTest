//b:int;a:short;c:short
int main()
{
  char d;
  b = 65527 & (++a);
  d = (0 == 0) ? (b) : (0);
  if (d)
    c = 0;
  printf("%d\n", c);
}

