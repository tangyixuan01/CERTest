//size:ssize_t
static void writeto(char *text_p, ssize_t size)
{
  fprintf(stderr, "Write to: %p, size=%d\n", text_p, size);
  strncpy(text_p, "sparta", size);
}

