//b:char;c:char;a:int
for (; c != 3; c = c + 7)
{
  a = b & a;
  if (a)
    break;
}
