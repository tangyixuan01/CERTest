//b:int;a:char
int main()
{
  unsigned char c = a;
  unsigned char d = a;
  b = (d == 0) ? (c) : (c % d);
  return 0;
}

