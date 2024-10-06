//b:short [1];a:short
int main()
{
  unsigned short c = ~a;
  if (a < c)
  {
    c = a;
    a = ~a;
  }
  if (a)
    a = b[c];
  return 0;
}

