//my_nearbyintf:func float
int main()
{
  volatile float in = 0.5f;
  fesetround(FE_DOWNWARD);
  printf("mynearbyintf(in) = %lf\n", my_nearbyintf(in));
}

