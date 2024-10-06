//val:int;i:int
for (i = 0; i < (256 / 4); i++)
{
  value[i] = val;
  val += 0x04040404;
}
