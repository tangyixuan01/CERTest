//b:unsigned int
static void fn1(int c)
{
  if (!((-c) & (((--b) >> 1) + 2)))
    __builtin_abort();
}

