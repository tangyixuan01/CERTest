//c:int;d:char;printf:func int;a:char;b:char
int main()
{
  int e = b++;
  c++;
  d = (a++) == e;
  if (c)
    printf("%d\n", (int) b);
  return 0;
}

