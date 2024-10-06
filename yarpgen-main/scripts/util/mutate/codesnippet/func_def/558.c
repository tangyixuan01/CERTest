//OnceFiles:FILELIST *;stricmp:func int;fName:char *;WorkingDir:char *;Next:struct tagFileList *
int IsOnceFile(char *fname)
{
  FILELIST *rvp;
  char tmpbuf[512];
  if ((fname[0] == '.') && (fname[1] == '/'))
    sprintf(tmpbuf, "%s%c%s", WorkingDir, '/', fname + 2);
  else
    strcpy(tmpbuf, fname);
  rvp = OnceFiles;
  while (rvp)
  {
    if (!stricmp(tmpbuf, rvp->fName))
      return 1;
    rvp = rvp->Next;
  }

  return 0;
}

