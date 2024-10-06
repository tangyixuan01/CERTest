//i:int
if (i < FLOAT_FUNCT_TOKEN)
  Table[i] = FLOAT_FUNCT_TOKEN;
else
{
  if (i < VECTOR_FUNCT_TOKEN)
    Table[i] = VECTOR_FUNCT_TOKEN;
  else
  {
    if (i < COLOUR_KEY_TOKEN)
      Table[i] = COLOUR_KEY_TOKEN;
  }
}
