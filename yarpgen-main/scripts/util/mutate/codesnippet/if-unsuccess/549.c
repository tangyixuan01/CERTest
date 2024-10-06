//abort:func void;res:signed char [256];c:unsigned int;foo:func signed char
if (foo(c) != res[c])
  abort();
