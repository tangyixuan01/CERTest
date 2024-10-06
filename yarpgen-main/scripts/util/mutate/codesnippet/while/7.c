//value:int;argv:char **;pos:int;argc:int
while (((pos < argc) && (argv[pos][0] == '!')) && (argv[pos][1] == '\0'))
{
  do
  {
    ++pos;
    if (1 && (pos >= argc))
      return 2;
  }
  while (0);
  value = 1 - value;
}
