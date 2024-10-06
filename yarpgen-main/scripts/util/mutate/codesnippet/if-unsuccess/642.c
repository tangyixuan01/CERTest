//flag:int;ret:int;bar:func int
if (flag)
{
  ret = bar();
  if (!ret)
    ret = bar();
}
