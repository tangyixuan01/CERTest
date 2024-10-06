//e:int;i:short;c:short;printf:func int;f:int;g:char;b:int;h:int [4][1]
int main()
{
  int *j = &e;
  int *k = &f;
  unsigned short d = c;
  i = d >> b;
  *j = i;
  g = 0;
  for (; g <= 3; g++)
    *k = h[((unsigned char) (1 + e)) + g][0];

  printf("%d\n", f);
}

