//b:char;a:int
int main()
{
  char c = 0;
  for (; c != 3; c = c + 7)
  {
    a = b & a;
    if (a)
      break;
  }

  return 0;
}

