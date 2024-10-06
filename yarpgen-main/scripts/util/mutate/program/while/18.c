//d:unsigned  memcpy:int  
while (1)
{
  float f;
  memcpy(&f, &d, 4);
  if ((f >= 0.56) && (f <= 0.57))
    c++;
  d++;
  if (d == 0)
    break;
}
