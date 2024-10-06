//b:char;f:int;c:int;a:char
for (; a; ++a)
{
  f = 5;
  for (; f != 32; ++f)
    c = 8;

  L1:
  if (b)
    goto L2;

}
