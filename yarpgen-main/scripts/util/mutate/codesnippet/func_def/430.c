//
int main()
{
  unsigned int tab[6][2] = {{69, 73}, {36, 40}, {24, 16}, {16, 11}, {4, 5}, {3, 1}};
  int flag = 1;
  int sum_0 = 0;
  int sum_1 = 0;
  for (int t = 0; t < 6; t++)
  {
    sum_0 += tab[t][0];
    sum_1 += tab[t][1];
  }

  int x1 = sum_0 < 100;
  int x2 = sum_0 > 200;
  int x3 = x1 || x2;
  if (sum_1 > 200)
  {
    flag = 0;
  }
  printf("sum_0: %d\n", sum_0);
  printf("sum_1: %d\n", sum_1);
  printf("x1: %d\n", x1);
  printf("x2: %d\n", x2);
  printf("x1 || x2: %d\n", x3);
  printf("flag: %d\n", flag);
  return 0;
}

