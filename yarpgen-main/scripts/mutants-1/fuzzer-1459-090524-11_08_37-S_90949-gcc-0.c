#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int puts(const char *);
void free(void *);
void *malloc(unsigned long);
struct Node
{
  struct Node *child;
};
void walk(struct Node *module, int cleanup)
{
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
  }
  walk(module->child, cleanup);
  transparent_crc(NXEPwukp, "NXEPwukp", 1);
  transparent_crc(QRilAm3w, "QRilAm3w", 1);
  transparent_crc(K71vT4eC, "K71vT4eC", 1);
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
  struct Node *node = malloc(sizeof(struct Node));
  node->child = 0;
  walk(node, 1);
}

