//b:int;a:unsigned;c:int;d:int
int main()
{
  for (; c < 1; c++)
    if (b)
    a++;

  a++;
  for (; d < 1; d++)
  {
    if (a < 4294967294)
      continue;
    for (;;)
      ;

  }

  return 0;
}

