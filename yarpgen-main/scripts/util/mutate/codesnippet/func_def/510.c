//fn1:func char;a:struct 
{
  char f1;
};printf:func int
int main()
{
  char *b = &a.f1;
  while (fn1(--(*b), 3))
    ;

  printf("%d\n", a.f1);
  return 0;
}

