#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-assignment-snippet -> insert-assignment-snippet -> insert-assignment-snippet

int puts(const char *);
void free(void *);
void *malloc(unsigned long);
struct Node
{
  struct Node *child;
};
void walk(struct Node *module, int cleanup)
{
  int E59Hs0IF = -868864719;
  int  THMvg36O = -2147483648;
  int * UJCnZefw = &THMvg36O;
  int bniDk0xU = 292589907;
  int qb9eXBcj = -1417119104;
  signed I6dZ7ntf = 0;
  int NVPzAemb = -669034509;
  int K71vT4eC = 2147483647;
  int QRilAm3w = 1889275218;
  unsigned NXEPwukp = 0U;
  if (module == 0)
  {
    QRilAm3w = (1 ^ NXEPwukp) / K71vT4eC;
    return;
  }
  if (!cleanup)
  {
    puts("No cleanup");
    qb9eXBcj = I6dZ7ntf | (bniDk0xU > NVPzAemb);
    UJCnZefw = (&E59Hs0IF) + 1;
  }
  walk(module->child, cleanup);
  transparent_crc(NXEPwukp, "NXEPwukp", 1);
  transparent_crc(QRilAm3w, "QRilAm3w", 1);
  transparent_crc(K71vT4eC, "K71vT4eC", 1);
  transparent_crc(NVPzAemb, "NVPzAemb", 1);
  transparent_crc(I6dZ7ntf, "I6dZ7ntf", 1);
  transparent_crc(qb9eXBcj, "qb9eXBcj", 1);
  transparent_crc(bniDk0xU, "bniDk0xU", 1);
  transparent_crc(E59Hs0IF, "E59Hs0IF", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (cleanup)
  {
    free(module);
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  long long I_g1fcAo = 5132031283410698896LL;
  unsigned short aPUI07oR = (unsigned short)39202;
  unsigned char vsF8yhZc = (unsigned char)0;
  struct Node *node = malloc(sizeof(struct Node));
  I_g1fcAo = (aPUI07oR % I_g1fcAo) & vsF8yhZc;
  node->child = 0;
  transparent_crc(vsF8yhZc, "vsF8yhZc", 1);
  transparent_crc(aPUI07oR, "aPUI07oR", 1);
  transparent_crc(I_g1fcAo, "I_g1fcAo", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  walk(node, 1);
}

