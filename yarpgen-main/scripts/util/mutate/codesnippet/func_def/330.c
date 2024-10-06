//b:int;a:struct 
{
  int v;
} [2];printf:func int
int main()
{
  a[1].v = 1;
  a[0] = a[1];
  a[1].v = 0;
  for (; b < 1; b++)
    printf("%d\n", a[0].v);

  return 0;
}

