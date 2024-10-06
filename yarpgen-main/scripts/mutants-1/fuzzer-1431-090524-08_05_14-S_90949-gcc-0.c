#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int puts(const char *);
void free(void *);
void *malloc(unsigned long);
struct Node
{
  struct Node *child;
};
void walk(struct Node *module, int cleanup)
{
  int kMWDCbVp = 2147483647;
  int  g6IrwS9Q = -2147483648;
  int * volatile izSJyWbl = &g6IrwS9Q;
  int K9uPidC4 = 1531202396;
  if (module == 0)
  {
    return;
  }
  if (!cleanup)
  {
    puts("No cleanup");
  }
  walk(module->child, cleanup);
  transparent_crc(K9uPidC4, "K9uPidC4", 1);
  transparent_crc(kMWDCbVp, "kMWDCbVp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (cleanup)
  {
    free(module);
    for (; kMWDCbVp; kMWDCbVp--)
    {
      *izSJyWbl = 1;
      K9uPidC4 |= 4;
    }

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

