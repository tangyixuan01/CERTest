//d:char;g:short [2];printf:func int;a:int;f:long;h:int;b:short;fn1:func int
int main()
{
  for (h = 0; h < 2; h++)
    g[h] = -8;

  f = a && 1;
  b = fn1(g[0] ^ f);
  printf("%d\n", d);
  return 0;
}

