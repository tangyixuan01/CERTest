//fn1:func int;a:int;c:int;b:volatile int
void fn2()
{
  c = fn1(b, --a);
}

