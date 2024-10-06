//func_31:func int;g_752:int;g_775:int;func_38:func int;func_58:func int
int func_20(int p_22, int p_24)
{
  lbl_1476:
  p_24 || func_58();

  if (0 >= g_775)
  {
  }
  else
  {
    for (; g_752; g_752 += 1)
    {
      int w = func_31(0, p_22);
      if (func_38(w, p_24) == g_752)
        break;
    }

    goto lbl_1476;
  }
  return 0;
}

