//
long long equation1(void)
{
  int num = 0x1234;
  unsigned int flags = 0x8000;
  unsigned int container = 0;
  unsigned int quantity = 0;
  return (((((long long) num) << 32) | (flags << 16)) | (container << 8)) | quantity;
}

