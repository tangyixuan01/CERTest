//bar:func int
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
