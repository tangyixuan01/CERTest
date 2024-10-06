//e:char;d:struct 
{
  short b;
  short c;
};printf:func int;a:char;f:int
int main()
{
  short *g = &d.c;
  short *h = &d.b;
  e = 4 - a;
  *h = (*g = e);
  for (; f < 2; f++)
    printf("%d\n", d.c);

}

