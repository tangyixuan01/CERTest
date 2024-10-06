//argc:int;pos:int;argv:char **
int term()
{
  int value;
  if (pos >= argc)
    return 2;
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
  return 0;
}

