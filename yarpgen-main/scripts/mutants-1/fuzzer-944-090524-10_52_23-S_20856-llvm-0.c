#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int *d;
int g;
int i;
int **j;
short *f;
static char c;
struct 
{
  int f2;
} e;
void fn1(char *p)
{
  i = a / (*p);
}

void fn2(int p)
{
  short h;
  fn1(&c);
  f = &h;
  for (; g < 1; g++)
  {
    if (c && p)
    {
      *j = 0;
    }
  }

}

void fn3(int *p)
{
  int  WblhX5O0 = -326108867;
  int * jBcFRwUW = &WblhX5O0;
  unsigned char XgGRUoL_ = (unsigned char)255;
  transparent_crc(XgGRUoL_, "XgGRUoL_", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (XgGRUoL_)
  {
    case 0x95:
      *jBcFRwUW = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *jBcFRwUW = 0x00;
      break;

    default:
      *jBcFRwUW = 0x05;
      break;

  }

  fn2(*p);
}

void fn4()
{
  b = 0;
  for (c = -7; c; c++)
  {
    fn3(&b);
    for (; e.f2;)
    {
      *d = 0;
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn4();
  return 0;
}

