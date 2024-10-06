//b:unsigned char [25];a:unsigned char [25];res:unsigned char
int main()
{
  for (int i = 0; i < 25; ++i)
    a[i] = 116, b[i] = 213;

  res = (unsigned char) ((((b[0]) ? ((_Bool) (-11818)) : (a[2])) < ((b[2] > 1) ? (b[2]) : (1))) ? ((b[0]) ? ((_Bool) (-11818)) : (a[2])) : ((b[2] > 1) ? (b[2]) : (1)));
  printf("%d\n", res);
}

