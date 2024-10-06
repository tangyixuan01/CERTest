//foo:func void;mmap:func void *
int main()
{
  void *x;
  long a;
  x = mmap(4432, 65536, 2, 2 | 32, 1, 0);
  a = 65536 - (((2 * 320) - 1) * (sizeof(short)));
  foo(x, (unsigned short *) (((char *) x) + a));
}

