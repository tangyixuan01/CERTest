//
int main()
{
  void *p = malloc(10);
  int *pi = p;
  double *pd = p;
  *pi = 1;
  printf("*pi = %d\n", *pi);
  int a = *pi;
  *pd = 0;
  *pi = a;
  printf("p = %p\n", p);
  printf("*pi = %d\n", *pi);
}

