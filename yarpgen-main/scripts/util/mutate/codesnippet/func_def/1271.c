//copysign_bug:func int
int main(void)
{
  double x;
  x = -0.0;
  printf("copysign_bug(%.17g) = %d\n", x, copysign_bug(x));
  x = 0.0;
  printf("copysign_bug(%.17g) = %d\n", x, copysign_bug(x));
  return 0;
}

