//n:int;value:long
while (value > 0xffffffffU)
{
  n += 4;
  value /= ((10 * 10) * 10) * 10;
}
