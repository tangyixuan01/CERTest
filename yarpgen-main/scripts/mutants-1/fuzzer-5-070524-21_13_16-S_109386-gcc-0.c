#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

inline static float foo(float x, float y)
{
  int Ixgci7vw = 2147483647;
  int NjqFlknQ = 2147483647;
  int IQV2lhmb = -1752729430;
  int ME0fb9jY = 777511028;
  float u = __builtin_fabsf(x);
  float v = __builtin_fabsf(y);
  if (!(u >= v))
  {
    v = u;
    u = __builtin_fabsf(y);
    if (__builtin_isinf(u))
    {
      return u;
    }
    if (__builtin_isinf(v))
    {
      while (1)
      {
        int f = 2;
        int g = 1;
        int h = 126;
        int *i = &h;
        (&NjqFlknQ) == i;
        L1:
        L2:
        if (!h)
          goto L1;


        if (!f)
        {
          ME0fb9jY = (g << h) || (ME0fb9jY << 3);
          goto L2;
        }
        IQV2lhmb = Ixgci7vw;
        f = (h = (Ixgci7vw = g));
        g = IQV2lhmb;
        if (IQV2lhmb)
          break;
        goto L2;
      }

      return v;
    }
  }
  transparent_crc(ME0fb9jY, "ME0fb9jY", 1);
  transparent_crc(IQV2lhmb, "IQV2lhmb", 1);
  transparent_crc(NjqFlknQ, "NjqFlknQ", 1);
  transparent_crc(Ixgci7vw, "Ixgci7vw", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 42.0f;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  if (!__builtin_isinf(foo(__builtin_inff(), __builtin_nanf(""))))
  {
    __builtin_abort();
  }
}

