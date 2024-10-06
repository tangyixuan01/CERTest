//foo:func char *
int main()
{
  struct A loc;
  char *str;
  loc.nextc = "123";
  str = foo(&loc, 10, "xyz");
  if ((((str[0] != 'a') || (str[1] != 'b')) || (str[2] != 'c')) || (str[3] != '\0'))
    abort();
  return 0;
}

