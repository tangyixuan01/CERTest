//
int main(unsigned argc, char **argv)
{
  if (argc <= 0)
    return 0;
  if (argc > 3)
    return 0;
  switch (argc)
  {
    case 1:

    case 3:
      fprintf(stderr, "value: %d\n", argc);
      break;

    case 2:
      fprintf(stderr, "value: %d\n", argc);
      break;

    default:
      abort();

  }

  return 1;
}

