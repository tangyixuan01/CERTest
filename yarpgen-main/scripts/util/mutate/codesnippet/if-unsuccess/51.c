//argv:char **;term:func int;value:int;argc:int;pos:int
if ((argv[pos][0] == '!') && (argv[pos][1] == '\0'))
{
  value = 0;
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

  return (value) ? (!term()) : (term());
}
