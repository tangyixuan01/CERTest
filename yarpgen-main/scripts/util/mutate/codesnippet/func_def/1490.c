//f:func unsigned *;printf:func int
int main()
{
  int *h;
  struct a i = {8};
  int *j = &i.b;
  h = f(j);
  *h = 0;
  printf("%d\n", i.b);
}

