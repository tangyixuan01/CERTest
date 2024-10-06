//c:unsigned char;printf:func int;s:int
int main()
{
  printf("%d\n", (c >> s) | (c << (8 - s)));
  return 0;
}

