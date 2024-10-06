#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-assignment-snippet -> insert-assignment-snippet -> insert-if-snippet -> insert-if-snippet -> insert-if-snippet -> insert-while-snippet -> insert-for-snippet

extern int printf(const char *, ...);
void xmlCleanURI(void *p)
{
}

static int xmlParseRelativeURI(void *p, const char **str)
{
  printf("%s\n", *str);
  return 0;
}

static int xmlParseAbsoluteURI(void *p, const char **str)
{
  printf("%s\n", *str);
  while (((*(*str)) != '/') && ((*(*str)) != '\0'))
  {
    (*str)++;
  }

  return 2;
}

int xmlParseURIReference(void *uri, const char *str)
{
  int ret;
  const char *tmp = str;
  ret = xmlParseAbsoluteURI(uri, &str);
  if (ret != 0)
  {
    xmlCleanURI(uri);
    str = tmp;
    ret = xmlParseRelativeURI(uri, &str);
  }
  return ret;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  xmlParseURIReference(0, "dtd/kdex.dtd");
  return 0;
}

