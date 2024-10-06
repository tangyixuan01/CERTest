//e:func short;c:int;d:int;h:func char;b:unsigned
int main()
{
  short a = e(!c, 65535);
  b = (d = h(a <= (-1)));
  if (b != 1)
    __builtin_abort();
  return 0;
}

