//str:const char *
for (size_t i = 0; i < 10; ++i)
{
  char c = str[i];
  bool d = isdigit(c);
  if ((i < 10) && (d == isdigit(str[i])))
  {
    printf("%zu %c\n", i, str[i]);
  }
}
