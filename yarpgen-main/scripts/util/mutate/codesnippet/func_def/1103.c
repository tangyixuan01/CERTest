//e:int *;d:union 
{
  long a;
  int b;
  int c;
};printf:func int;f:char;g:char
int main()
{
  for (; f >= 0; f--)
  {
    long *h = &d.a;
    *h = g;
    *e = 1;
  }

  printf("%d\n", d.b);
}

