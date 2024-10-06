//equation4:func long long;equation1:func long long;equation2:func long long;equation3:func long long
int main(int argc, char *argv[])
{
  struct field test = {0x1234, 0x8000, 0, 0};
  printf("0x%016qx\n", equation1());
  printf("0x%016qx\n", equation2(&test));
  printf("0x%016qx\n", equation3(&test));
  printf("0x%016qx\n", equation4(&test));
}

