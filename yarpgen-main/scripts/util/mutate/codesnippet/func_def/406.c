//b:short *;a:short;printf:func int
int main()
{
  int c = 0;
  int d[1];
  c = 0;
  for (; c < 1; c++)
    d[c] = 10;

  *b = d[0];
  printf("%d\n", a);
}

