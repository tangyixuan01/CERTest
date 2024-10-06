//b:int;a:unsigned;c:int;d:long
int main()
{
  while (1)
  {
    int m = a;
    L:
    a = ~(-(m || (b & d)));

    b = (1 ^ a) / c;
    if (b)
      goto L;
    break;
  }

  return 0;
}

