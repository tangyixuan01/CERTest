//b:union 
{
  int a;
};c:int *;printf:func int
int main()
{
  int *d = (int *) (&b);
  *d = 2;
  *c = 1;
  printf("%d\n", b.a);
}

