//e:int *;d:union 
{
  long a;
  int b;
  int c;
};printf:func int;g:char
int main()
{
  long *h = &d.a;
  *h = g;
  *e = 1;
  printf("%d\n", d.b);
}

