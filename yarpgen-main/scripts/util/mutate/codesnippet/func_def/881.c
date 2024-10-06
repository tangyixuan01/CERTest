//
int main(void)
{
  char a[8];
  char b[8];
  char *a_ptr = a + 8;
  char *b_ptr = b;
  printf("a_ptr = %p, b_ptr = %p\n", a_ptr, b_ptr);
  if (a_ptr != b_ptr)
  {
    printf("a_ptr != b_ptr\n");
  }
  else
  {
    printf("a_ptr == b_ptr\n");
  }
  if (((uintptr_t) a_ptr) != ((uintptr_t) b_ptr))
  {
    printf("(uintptr_t)a_ptr != (uintptr_t)b_ptr\n");
  }
  else
  {
    printf("(uintptr_t)a_ptr == (uintptr_t)b_ptr\n");
  }
  return 0;
}

