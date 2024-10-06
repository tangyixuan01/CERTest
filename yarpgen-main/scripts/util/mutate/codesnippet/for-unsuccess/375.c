//steps:unsigned [2]
for (unsigned *io = steps; 0 < ((sizeof(steps)) / (sizeof(unsigned))); io++)
{
  if ((*io) == 0)
  {
    if (__builtin_dynamic_object_size(io, 0) != (sizeof(unsigned)))
      __builtin_abort();
    io--;
  }
}
