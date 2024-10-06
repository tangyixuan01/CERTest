//g_43:struct S1
{
  int f0;
  char f1;
  short f2;
};printf:func int;fn2:func void;g_474:int;g_1126:struct S1
{
  int f0;
  char f1;
  short f2;
};g_123:struct S1
{
  int f0;
  char f1;
  short f2;
};fn1:func int
int main(void)
{
  struct S1 l_38;
  l_38 = g_43;
  fn1(g_43);
  g_474 = l_38.f0;
  l_38.f2 || fn1(g_123);
  for (g_43.f1 = 1;; g_43.f1++)
    break;

  fn2();
  printf("%d\n", g_1126.f1);
}

