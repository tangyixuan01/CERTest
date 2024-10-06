//print_val:func void
static void cnv_print(uint64_t x)
{
  double f = x;
  uint64_t y = f;
  print_val(x);
  printf(" -> ");
  print_val(y);
  printf("\n");
}

