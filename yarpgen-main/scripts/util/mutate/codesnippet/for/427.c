//b:int;d:int;c:int;a:int *
for (; d <= 0; d++)
  b &= ((a || d) ^ c) == 1;
