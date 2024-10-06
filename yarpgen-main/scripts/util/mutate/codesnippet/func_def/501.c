//
void pre_init_tokenizer()
{
  int i;
  for (i = 0; i < LAST_TOKEN; i++)
  {
    Table[i] = i;
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
  }

}

