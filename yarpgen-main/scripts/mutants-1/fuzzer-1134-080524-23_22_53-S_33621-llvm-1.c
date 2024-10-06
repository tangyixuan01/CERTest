#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-while-snippet

int a;
int b;
int c;
int d = 1;
int e;
void fn1()
{
  int YTs4br6W = -2147483648;
  volatile unsigned int  vzljfWNo = 0U;
  volatile unsigned int * hV8QZYfO = &vzljfWNo;
  int vXcJsEY7 = -2147483648;
  int g;
  if (!a)
  {
    goto L1;
  }
  int i = ~a;
  if (i)
  {
    for (vXcJsEY7 = 0xbad; vXcJsEY7 >= 0; vXcJsEY7--)
    {
      if (vXcJsEY7 == 1)
        hV8QZYfO[0x708 / 4] = 0xbeefdead;
      for (YTs4br6W = 1; YTs4br6W >= 0; YTs4br6W--)
      {
        hV8QZYfO[0x708 / 4] = 0xbadcab;
        hV8QZYfO[0x704 / 4] = YTs4br6W;
      }

    }

    i = a;
    L2:
    c = 0;

    L1:
    g = ~(a | i);

    if (!g)
    {
      goto L2;
    }
  }
  c = (e = (b = i));
  g = a && g;
  c = -(((e || b) + g) - d);
  int k = ~(c | e);
  transparent_crc(vXcJsEY7, "vXcJsEY7", 1);
  transparent_crc(YTs4br6W, "YTs4br6W", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (k)
  {
    ;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int BnAK6PJv = -2147483648;
  a = 1;
  while (BnAK6PJv > 1)
    ;

  fn1();
  transparent_crc(BnAK6PJv, "BnAK6PJv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

