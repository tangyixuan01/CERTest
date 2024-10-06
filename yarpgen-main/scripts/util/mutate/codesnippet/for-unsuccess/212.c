//b:int;d:long long [32];e:int;c:int;a:int
for (; a < 6; a++)
{
  b ^= e;
  for (c = 0; c < 2; c++)
    d[a * 6] |= 9;

}
