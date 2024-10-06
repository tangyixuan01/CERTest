//
static void advance(_Bool f)
{
  ++pos;
  if (f && (pos >= argc))
    beyond();
}

