//printf:func int;m:union 
{
  short c;
  int k;
};l:func void
int main()
{
  l();
  printf("%d  %d\n", m.c, m.k);
}

