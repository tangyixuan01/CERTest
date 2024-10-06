//a_ptr:char *;b_ptr:char *
if (((uintptr_t) a_ptr) != ((uintptr_t) b_ptr))
{
  printf("(uintptr_t)a_ptr != (uintptr_t)b_ptr\n");
}
else
{
  printf("(uintptr_t)a_ptr == (uintptr_t)b_ptr\n");
}
