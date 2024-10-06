//ac:int;f:char;ad:int;a7:char;d8:short;z:int;u:char;i:int
for (i = 0; i < 8; i++)
{
  char ap = (a7 % ac) + d8;
  unsigned aq = (~0x1F) & (u % ((7 * (~ap)) ^ ad));
  if ((aq < 1027) && z)
    a7 = ((1958 | f) + 15) & 15;
}
