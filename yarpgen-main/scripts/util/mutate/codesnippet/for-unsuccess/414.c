//b:int [3];i:int;a:int [3]
for (i = 0; i < 3; i++)
  if (a[i] != b[i])
{
  puts("ERR 1");
  break;
}
