//exit:func void;abort:func void
void foo(int i)
{
  static int n;
  if ((i < CHAR_MIN) || (i > CHAR_MAX))
    abort();
  if ((++n) > 1000)
    exit(0);
}

