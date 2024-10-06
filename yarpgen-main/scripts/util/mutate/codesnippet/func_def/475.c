//b:long;a:short;printf:func int
int main()
{
  char c[][10][1] = {7, 0, 5, 5};
  for (; b <= 3; b++)
  {
    a = 0;
    for (; a >= 0; a--)
      if (c[a][b][a])
      break;

  }

  printf("%d\n", a);
}

