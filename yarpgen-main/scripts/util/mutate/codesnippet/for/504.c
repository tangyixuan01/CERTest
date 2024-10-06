//b:int;f:short;a:int
for (; a < 2; a++)
{
  short g = ~((~b) | (~f));
  int h = -g;
  int i = (3 / (~h)) / (~b);
  b = i;
}
