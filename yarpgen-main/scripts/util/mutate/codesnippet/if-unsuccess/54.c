//capacity:int;lst_realloc:func void *;list:void **
if (size > sl->capacity)
{
  int higher = sl->capacity;
  if (size > (((int) 32) / 2))
  {
    higher = 32;
  }
  else
  {
    while (size > higher)
    {
      higher *= 2;
    }

  }
  sl->capacity = higher;
  sl->list = lst_realloc(sl->list, sl->capacity);
}
