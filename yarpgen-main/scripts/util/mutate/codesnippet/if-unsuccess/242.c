//rvp:FILELIST *;OnceFiles:FILELIST *;Next:struct tagFileList *
if (OnceFiles == 0)
{
  OnceFiles = malloc(sizeof(FILELIST));
  rvp = OnceFiles;
}
else
{
  rvp = OnceFiles;
  while (rvp->Next)
  {
    rvp = rvp->Next;
  }

  rvp->Next = malloc(sizeof(FILELIST));
  if (rvp->Next == 0)
  {
    exit(-1);
  }
  rvp = rvp->Next;
}
