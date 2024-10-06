//i:func char *;d:char;a:char;h:char *;g:int
void j()
{
  char *k = &a;
  h = i();
  g = k == h;
  char l = g;
  d = (l == 0) ? (1) : (4 % l);
}

