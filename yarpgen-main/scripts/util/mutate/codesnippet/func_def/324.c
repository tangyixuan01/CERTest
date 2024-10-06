//
int main(int argc, char *argv[])
{
  void *p;
  p = dlsym(RTLD_DEFAULT, "main");
  if (p == 0)
    return -1;
  else
    if (((int (*)(int, char **)) p) != main)
    return 1;
  else
    return 0;
}

