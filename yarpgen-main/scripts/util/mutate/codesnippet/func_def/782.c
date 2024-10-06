//
int main(int argc, char *argv[])
{
  const char *s = (argc > 0) ? ("a") : ("b");
  char x[5];
  char y[5] = "a\0a";
  memcpy(x, y, sizeof(y));
  printf("%d\n", !strncmp(x, s, 4));
  return 0;
}

