//reverse:func void
void lua_rotate(struct X **L)
{
  struct X *y = *L;
  struct X *to = y - 1;
  struct X *from = y - 2;
  reverse(from, to);
}

