//printf:func int
int main()
{
  long long C = 1ULL << 63;
  long long X;
  int Y = 32;
  X = C >> (Y & 31);
  printf("%s (%llx)\n", (X != C) ? ("FAIL") : ("OK"), X);
  return 0;
}

