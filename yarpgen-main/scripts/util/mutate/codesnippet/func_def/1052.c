//puts:func int;free:func void
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

