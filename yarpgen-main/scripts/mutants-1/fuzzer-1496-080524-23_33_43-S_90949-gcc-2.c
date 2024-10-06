#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet -> insert-if-snippet

int puts(const char *);
void free(void *);
void *malloc(unsigned long);
struct Node
{
  struct Node *child;
};
void walk(struct Node *module, int cleanup)
{
  int aVm9087j = -433730387;
  int t2TimjMA = -542758977;
  long rWNShDEt = 9223372036854775807LL;
  int W4MlBwxN = 2147483647;
  if (module == 0)
  {
    return;
  }
  if (!cleanup)
  {
    puts("No cleanup");
  }
  walk(module->child, cleanup);
  transparent_crc(W4MlBwxN, "W4MlBwxN", 1);
  transparent_crc(rWNShDEt, "rWNShDEt", 1);
  transparent_crc(t2TimjMA, "t2TimjMA", 1);
  transparent_crc(aVm9087j, "aVm9087j", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (cleanup)
  {
    free(module);
    if (rWNShDEt)
      if (W4MlBwxN)
    {
      t2TimjMA = 0;
      for (; t2TimjMA; t2TimjMA++)
        aVm9087j = 0;

    }
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int JwroTRI3 = -2147483648;
  int eKvbtHiJ = 2147483647;
  int  qv8Cwd_0 = 2147483647;
  int * sevcZ7Fu = &qv8Cwd_0;
  unsigned char yTUHK8Dc = (unsigned char)0;
  switch (yTUHK8Dc)
  {
    case 0x95:
      *sevcZ7Fu = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *sevcZ7Fu = 0x00;
      break;

    default:
      *sevcZ7Fu = 0x05;
      break;

    eKvbtHiJ = 1 + ((JwroTRI3 & 2) == JwroTRI3);
  }

  struct Node *node = malloc(sizeof(struct Node));
  node->child = 0;
  transparent_crc(yTUHK8Dc, "yTUHK8Dc", 1);
  transparent_crc(eKvbtHiJ, "eKvbtHiJ", 1);
  transparent_crc(JwroTRI3, "JwroTRI3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  walk(node, 1);
}

