//p:int *;x:int
for (uintptr_t i = 0;; i++)
{
  if (i == ((uintptr_t) (&x)))
  {
    p = (int *) i;
    break;
  }
}
