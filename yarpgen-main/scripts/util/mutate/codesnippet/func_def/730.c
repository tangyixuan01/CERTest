//b:volatile short;a:unsigned;c:unsigned long long;printf:func int
int main()
{
  int d = (~((~5UL) & c)) % 5;
  (5 % (d | 1)) || b;
  int e = ~(((d | 5LL) % 7) + ((~0) | a));
  printf("%d\n", e);
  return 0;
}

