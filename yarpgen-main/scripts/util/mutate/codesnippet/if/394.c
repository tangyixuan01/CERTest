//io:unsigned *
if ((*io) == 0)
{
  if (__builtin_dynamic_object_size(io, 0) != (sizeof(unsigned)))
    __builtin_abort();
  io--;
}
