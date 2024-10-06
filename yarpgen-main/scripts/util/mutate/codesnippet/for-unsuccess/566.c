//foo:func signed char;res:signed char [256];abort:func void;c:unsigned int
for (c = 0; c <= 255; ++c)
{
  if (foo(c) != res[c])
    abort();
}
