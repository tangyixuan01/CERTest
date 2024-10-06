//b:unsigned short;a:unsigned short;c:int
void foo()
{
  if (a + (b * (~(0 != 5))))
    c = (-(~(b * (~(0 != 5))))) + 2147483647;
}

