//printf:func int;up:union 
{
  short f0;
  int f1;
} *;a:int;u:union 
{
  short f0;
  int f1;
}
int main()
{
  for (; a <= 0; a++)
    if (u.f0 = 1)
    up->f1 = 0;

  printf("%d\n", u.f1);
  return 0;
}

