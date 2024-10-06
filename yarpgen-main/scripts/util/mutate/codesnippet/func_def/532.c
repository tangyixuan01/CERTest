//f:int;g:func struct A
int main()
{
  struct A i = g();
  struct A j = i;
  j.b && (f = 1);
  return f;
}

