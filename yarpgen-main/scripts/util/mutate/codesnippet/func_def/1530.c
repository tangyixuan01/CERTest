//bar:func int
void foo(void)
{
  if (!bar())
    for (;;)
    ;

  for (;;)
  {
    static int flag = 0;
    int ret = 0;
    bar();
    if (flag)
    {
      ret = bar();
      if (!ret)
        ret = bar();
    }
    flag = !bar();
    bar();
  }

}

