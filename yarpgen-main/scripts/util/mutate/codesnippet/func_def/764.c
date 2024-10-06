//
int main()
{
  struct TEST_STRUCT x;
  int a = -123;
  x.f_24 = a;
  printf("a=%d (%08X)\n", (int) a, (int) a);
  printf("x.f_24=%d (%08X)\n", (int) x.f_24, (int) x.f_24);
  if (((int) x.f_24) != ((int) a))
    printf("test failed\n");
  else
    printf("test ok\n");
  return 0;
}

