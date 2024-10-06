//b:long;c:char [][10][1];a:short
for (; b <= 3; b++)
{
  a = 0;
  for (; a >= 0; a--)
    if (c[a][b][a])
    break;

}
