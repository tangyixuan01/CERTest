//c:long;printf:func int;f:short;g:func short;b:short
int main()
{
  int h;
  f = g();
  int i = f;
  h = (i < 0) ? (i) : (i >> 14);
  c = b && h;
  printf("%d\n", (int) c);
}

