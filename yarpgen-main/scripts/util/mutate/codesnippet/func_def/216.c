//b:int;a:unsigned char;c:int
static void fn1()
{
  int i = (a > 1) ? (1) : (a);
  int j = 6 & (c = a && (b = a));
  int d = 0;
  int e = a;
  int f = ~c;
  int g = b || a;
  unsigned char h = ~a;
  if (a)
    f = j;
  if (h && g)
    d = a;
  i = ((-(~((f * d) * h))) + c) && ((e || i) ^ f);
  if (i != 1)
    __builtin_abort();
}

