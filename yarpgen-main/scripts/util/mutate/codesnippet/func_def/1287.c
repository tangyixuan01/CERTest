//
int main(int argc, char **argv)
{
  struct S s;
  strncpy(s.data, argv[1], 4 + 100);
  int length = (strlen(s.data) < 4) ? (strlen(s.data)) : (4);
  printf("length: %d\n", length);
  return 0;
}

