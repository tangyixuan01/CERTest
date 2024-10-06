//PRINTF:func void;c:int;a:int;b:int
int main(void)
{
  volatile int d = 1;
  volatile int e = 1;
  int f = 1 / a;
  int g = 1U < f;
  int h = 2 + g;
  int i = 3 % h;
  int j = e && b;
  int k = 1 == c;
  int l = d != 0;
  short m = (short) (((-1) * i) * l);
  short x = j * (k * m);
  if (i == 1)
  {
    PRINTF("OK");
  }
  if (x != (-1))
    __builtin_abort();
  return 0;
}

