//
int main(void)
{
  unsigned d = 0;
  int c = 0;
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

  printf("%d\n", c);
  return 0;
}

