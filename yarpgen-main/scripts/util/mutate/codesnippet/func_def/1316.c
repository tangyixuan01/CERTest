//
char g(char h, char i)
{
  return ((i == 0) || ((h == (-128)) && (i == 1))) ? (h) : (h % i);
}

