//
int main(void)
{
  size_t len = 0xC0000000;
  char *buf = malloc(len);
  if (!buf)
    return 1;
  printf("buf       = %p\n", (void *) buf);
  printf("len       = 0x%08zx\n", len);
  printf("buf + len = %p\n", (void *) (buf + len));
  printf("buf + len < buf: ");
  if ((buf + len) < buf)
    printf("true\n");
  else
    printf("false\n");
  return 0;
}

