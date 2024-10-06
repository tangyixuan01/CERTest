//s:struct S
{
  unsigned b4 : 4;
  unsigned b6 : 6;
}
int main(void)
{
  s.b6 = 31;
  s.b4 = s.b6;
  s.b6 = s.b4;
  return (s.b6 == 15) ? (0) : (1);
}

