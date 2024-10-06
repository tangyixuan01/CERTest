//a:int [3];c:int [3]
int main(void)
{
  int b[3];
  int i;
  b[0] = 1;
  b[1] = 2;
  b[2] = 3;
  for (i = 0; i < 3; i++)
    if (a[i] != b[i])
  {
    puts("ERR 1");
    break;
  }

  b[0] = 4;
  b[1] = 5;
  b[2] = 6;
  for (i = 0; i < 3; i++)
    if (c[i] != b[i])
  {
    puts("ERR 2");
    break;
  }

  return 0;
}

