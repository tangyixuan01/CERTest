//buff:volatile char
void PRINTF(const char *s)
{
  while (*(s++))
    buff = *s;

}

