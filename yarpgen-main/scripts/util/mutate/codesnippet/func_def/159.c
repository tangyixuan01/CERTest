//x6:struct x3
{
  struct x0 x4;
  char x5;
};printf:func int
int main()
{
  struct x3 x7 = {{0, 0}, 1};
  x6 = x7;
  x7.x4.x2;
  printf("%d\n", x6.x5);
  return 0;
}

