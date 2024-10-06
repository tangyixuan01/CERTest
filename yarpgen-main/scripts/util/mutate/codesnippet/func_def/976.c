//g1:volatile float;g2:float
void f(void)
{
  float i;
  if (g2 >= 0)
    return;
  for (i = 0; i < 10; ++i)
    g1 = g2 + i;

}

