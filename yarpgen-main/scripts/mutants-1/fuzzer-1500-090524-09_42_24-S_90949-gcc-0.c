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
  int KX7mvzgY = 1897830055;
  int  UTiWpXNm = 593757020;
  int * YS_9xbgH = &UTiWpXNm;
  if (module == 0)
  {
    return;
  }
  if (!cleanup)
  {
    puts("No cleanup");
    for (; KX7mvzgY < 7; KX7mvzgY++)
      for (; *YS_9xbgH;)
      ;


  }
  walk(module->child, cleanup);
  transparent_crc(KX7mvzgY, "KX7mvzgY", 1);
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

