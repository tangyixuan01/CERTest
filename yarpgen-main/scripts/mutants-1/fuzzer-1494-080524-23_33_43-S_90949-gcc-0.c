#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int puts(const char *);
void free(void *);
void *malloc(unsigned long);
struct Node
{
  struct Node *child;
};
void walk(struct Node *module, int cleanup)
{
  if (module == 0)
  {
    return;
  }
  if (!cleanup)
  {
    puts("No cleanup");
  }
  walk(module->child, cleanup);
  if (cleanup)
  {
    free(module);
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
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

  }

  struct Node *node = malloc(sizeof(struct Node));
  node->child = 0;
  transparent_crc(yTUHK8Dc, "yTUHK8Dc", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  walk(node, 1);
}

