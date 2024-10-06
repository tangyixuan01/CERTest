//b:int;a:int;fn1:func int;c:int
int main()
{
  int d = 0;
  for (; a < 1; a++)
  {
    c = 1;
    fn1((b &= c) | 10L, d);
  }

  return 0;
}

