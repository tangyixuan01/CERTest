//e:int;c:int;d:char;f:char;g:int;b:struct 
{
  unsigned a : 6;
};h:char
void fn1()
{
  for (; c < 9; c++)
  {
    if (f)
      g = ~((~0) / (g ^ e));
    b.a = ~0;
    d = ~(((h ^ b.a) & 132) & ((~(f && g)) | (d && 1)));
    e = ~0;
    if ((d < 127) || (f < 1))
      continue;
    g = 0;
  }

}

