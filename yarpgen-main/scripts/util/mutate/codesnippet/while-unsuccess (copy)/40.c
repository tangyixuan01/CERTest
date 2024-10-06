//stricmp:func int;fName:char *;rvp:FILELIST *;Next:struct tagFileList *;tmpbuf:char [512]
while (rvp)
{
  if (!stricmp(tmpbuf, rvp->fName))
    return 1;
  rvp = rvp->Next;
}
