//fun1:func void;s:char [4]
void fun2(char *s)
{
  T *t = (T *) s;
  fun1(t->s);
}

