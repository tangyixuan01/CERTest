//
int main()
{
  foo(dst, src);
  for (int i = 0; i < 16; i++)
    printf("%04x ", dst[i]);

  printf("\n");
  for (int i = 0; i < 16; i++)
    printf("%04x ", dst[i + 16]);

  printf("\n");
  return 0;
}

