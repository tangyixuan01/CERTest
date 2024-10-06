//g_data:short [];test:func void
int main()
{
  short *other = malloc(16 * (sizeof(short)));
  test(g_data, other, 16, 8);
  printf("%d\n", other[0]);
  printf("%d\n", other[1]);
  printf("%d\n", other[2]);
  printf("%d\n", other[3]);
  printf("%d\n", other[4]);
  printf("%d\n", other[5]);
  printf("%d\n", other[6]);
  printf("%d\n", other[7]);
  return 0;
}

