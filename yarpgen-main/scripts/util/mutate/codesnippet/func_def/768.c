//bar:func void *
void *foo(void *p)
{
  return bar((void *) 0x12345000, p, 256);
}

