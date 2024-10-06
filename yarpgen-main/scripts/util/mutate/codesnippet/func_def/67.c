//e:int [7];c:char;d:short;printf:func int;a:int;f:long;g:char;b:long
int main()
{
  for (; c <= 6; c++)
  {
    g = (d < 0) ? (d) : (d >> a);
    f = g + b;
    e[c] = f;
  }

  printf("%d\n", e[1]);
}

