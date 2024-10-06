//func:func void
int main(int argc, char *argv[])
{
  uint32_t a[8] = {1, 0, 0, 0, 0, 0, 0, 0};
  uint32_t b[8];
  func(a, b);
  printf("%08X%08X%08X%08X%08X%08X%08X%08X\n", b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7]);
  return 0;
}

