//e:unsigned long;c:int;d:int;a:int;b:int
int main()
{
  unsigned f = 4294967292;
  e = e | f;
  c = (-1) % (((~f) ^ 4294967292) - (e - d));
  b = (~(-(~e))) % (~(-d));
  if (b)
    a = 0;
  if (a < 1)
    __builtin_abort();
  return 0;
}

