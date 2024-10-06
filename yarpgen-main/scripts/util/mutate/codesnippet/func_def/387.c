//e:char;c:long;d:short;a:unsigned char
int main()
{
  a = ~(1 && a);
  c = ~((((~a) / 8) | (-2)) & 11007578330939886389LLU);
  e = -c;
  d = (~c) / e;
  if (d < 2000)
    __builtin_abort();
  return 0;
}

