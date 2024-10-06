//x2:int;x:int;y2:int;w:unsigned int;z:int;y1:int;x3:unsigned int;y3:unsigned int;x1:int;y:int
if (x1 && y1)
{
  x2 = (x > 0) ? (x) : (-x);
  y2 = (y > 0) ? (y) : (-y);
  x3 = x2;
  y3 = y2;
  w = x3 * y3;
  if (w >= (1 << 30))
  {
    z = 1;
  }
  else
  {
    z = -1;
  }
}
