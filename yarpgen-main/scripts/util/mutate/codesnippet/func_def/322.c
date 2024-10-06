//ntoh:func float;hton:func float
int main(int argc, char **argv)
{
  float f = 1.3;
  float g = hton(f);
  float h = ntoh(g);
  printf("f=%f\ng=%f\nh=%f\n", f, g, h);
  return 0;
}

