//
static float my_nearbyintf(float x)
{
  float r = x;
  if (x > 0.0)
  {
    r += 0x1p+23;
    r -= 0x1p+23;
    r = fabs(r);
  }
  return r;
}

