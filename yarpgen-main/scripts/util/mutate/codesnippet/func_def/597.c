//b:char;a:char
int main()
{
  for (b = -7; b; b += 3)
    if (a)
    __builtin_abort();

  return 0;
}

